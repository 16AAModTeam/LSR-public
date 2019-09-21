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

for b in baseclasses
    println("class $b;")
end

for i in 1:length(old)
    # yes, this is lazy
    r = Regex("class $(old[i])[:]")
    baseclass = filter(x->occursin(r,x),aio)[1] |> x -> split(x,':')[end] # Doesn't deal with " : " but these don't exist in AiO
    println("""
class $(old[i]): $baseclass {
    init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = '$(new[i])' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
};
    """)
end
