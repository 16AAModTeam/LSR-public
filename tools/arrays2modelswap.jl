#!/usr/bin/env julia

# Usage: ./arrays2classshims.jl '["newname1", "newname2"]' '["oldname1", "oldname2"]'

cd(@__DIR__)
new = eval(Meta.parse(ARGS[1]))
old = eval(Meta.parse(ARGS[2]))

aio = readdir(".") |> f -> filter(x->occursin("AiO",x), f)[1] |> readlines

baseclasses = Set()
for i in 1:length(old)
    r = Regex("class $(old[i])[:]")
    b = filter(x->occursin(r,x),aio)[1] |> x -> split(x,':')[end] # Doesn't deal with " : " but these don't exist in AiO
    push!(baseclasses, b)
end

models = Dict()
for n in new
    shortname = split(n,'_')[2:end] |> x -> join(x,'_')
    r = Regex("model =.*$(shortname).*")
    b = filter(x->occursin(r,x),aio)[1]
    models[n] = b
end

for b in baseclasses
    println("class $b;")
end

for i in 1:length(old)
    # yes, this is lazy
    r = Regex("class $(old[i])[:]")
    baseclass = filter(x->occursin(r,x),aio)[1] |> x -> split(x,':')[end]
    println("""
        class $(old[i]): $baseclass {
            $(models[new[i]])
        };
    """)
end
