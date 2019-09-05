#!/usr/bin/env julia

# Usage: ./arrays2classshims.jl '["newname1", "newname2"]' '["oldname1", "oldname2"]'

# "Delete" needs to go in a separate addon which is required by the addon doing the replacement

new = eval(Meta.parse(ARGS[1]))
old = eval(Meta.parse(ARGS[2]))

println("// External base classes")
for c in Set(new)
    println("class $c;")
end

println()
println("// Replace existing classes")
for i in 1:length(old)
    println("class $(old[i]): $(new[i]) {};")
end

println()
println("// Lines below this need to go in another add-on which is required by this one")
for i in 1:length(old)
    println("delete $(old[i]);")
end
