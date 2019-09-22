To update this, simply delete all of CfgVehicles except `class CfgVehicles {`, then run

```
cd src/
./sqf2classhims.fish _{new,old}BuildingsVillage >> ../CfgVehicles.hpp
./sqf2classhims.fish _{new,old}BuildingsReligious >> ../CfgVehicles.hpp
```

add a closing `};` to CfgVehicles.hpp. You'll need fish and Julia on your path.

You may need to remove the AiO CPP file from ../../tools and replace it with an updated one.
