#!/usr/bin/env julia

# Usage: ./classgetter.jl "classnameyouwant"

cd(@__DIR__)
classname = join(ARGS," ")

aio = readdir(".") |> f -> filter(x->occursin("AiO",x), f)[1] |> readlines

openbr = 0
found = false

ind = filter(x->occursin("class $classname:",x[2]),enumerate(aio)|>collect)[1][1]
for r in aio[ind:end]
    global openbr += length(filter(x->x=='{',r))
    global found = openbr > 0
    global openbr -= length(filter(x->x=='}',r))
    println(r)
    if (openbr <= 0) && found
        break
    end
end
