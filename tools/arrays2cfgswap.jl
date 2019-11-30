#!/usr/bin/env julia

# Usage: ./arrays2cfgwap.jl '["newname1", "newname2"]' '["oldname1", "oldname2"]'
# NB: this doesn't currently deal with inheritance

import JSON

aio_json = JSON.parsefile("AiO.1.94.145977.json")["bin\\config.bin"] # Update when AiO is updated

aio = readdir(".") |> f -> filter(x->occursin("AiO",x), f)[1] |> readlines

fuzzyget(key,dict) = filter((k,v) -> occursin(key,k),dict)

function classlines(classname)
    openbr = 0
    found = false
    lines = []

    ind = filter(x->occursin("class $classname:",x[2]),enumerate(aio)|>collect)[1][1]
    for r in aio[ind:end]
        openbr += length(filter(x->x=='{',r))
        found = openbr > 0
        openbr -= length(filter(x->x=='}',r))
        push!(lines,r)
        if (openbr <= 0) && found
            break
        end
    end
    lines
end

function getbaseclasses!(classname, arr=[])
    class = fuzzyget(Regex("^" * classname * ":"), aio_json["CfgVehicles"])
    if (length(class) > 1) 
        throw("Classname $(classname) ambiguous")
    elseif (length(class) == 0)
        return arr
    end
    baseclass = (class |> keys |> first |> x -> split(x,":"))[2] |> lstrip
    push!(arr,baseclass)
    getbaseclasses!(baseclass,arr)
    arr
end

# get keys that need to be copied from parent class of new class
function getparentkeysrequired(classname)
    childkeys = fuzzyget(":",(fuzzyget(Regex("^" * classname * ":"),aio_json["CfgVehicles"]) |> values |> first)) |> keys
    if length(childkeys) == 0
        return []
    end
    childkeys .|> x -> split(x,":")[2] |> lstrip
end

# This will just be easier with a recursive AiO dump of CfgVehicles

if (length(ARGS) > 2)
    cd(@__DIR__)
    new = eval(Meta.parse(ARGS[1]))
    old = eval(Meta.parse(ARGS[2]))


    baseclasses = Set()
    for i in 1:length(old)
        r = Regex("class $(old[i])[:]")
        b = filter(x->occursin(r,x),aio)[1] |> x -> split(x,':')[end] # Doesn't deal with " : " but these don't exist in AiO
        #= push!(baseclasses, getbaseclasses!($(old[i]))...) =#
    end

    for b in baseclasses
        println("class $b;")
    end

    for i in 1:length(old)
        # yes, this is lazy
        r = Regex("class $(old[i])[:]")
        baseclass = filter(x->occursin(r,x),aio)[1] |> x -> split(x,':')[end]
        println("class $(old[i]): $baseclass {")
        for r in classlines(new[i])[3:end] # first line is classname, second is { on a newline in AiO
            println(r)
        end
    end
end
