#!/usr/bin/env julia

# Usage: ./arrays2classshims.jl '["newname1", "newname2"]' '["oldname1", "oldname2"]'

# "Delete" needs to go in a separate addon which is required by the addon doing the replacement

new = eval(Meta.parse(ARGS[1]))
old = eval(Meta.parse(ARGS[2]))

for i in 1:length(old)
    println("""
class $(old[i]) {
    init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = '$(new[i])' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
};
    """)
end
