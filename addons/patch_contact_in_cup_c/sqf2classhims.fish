#!/usr/bin/env fish

# e.g. ./sqf2classshims.fish _{new,old}BuildingsReligious

set names $argv[1] $argv[2]; ../../tools/arrays2modelswap.jl (grep $names[1] Building_Swap.sqf | head -n1 | cut -d'=' -f2) (grep $names[2] Building_Swap.sqf | head -n1 | cut -d'=' -f2)
