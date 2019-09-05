// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX LSR

// prefix for functions, since we cannot use a number at the start
#define FPREFIX m##PREFIX##

#define MAJOR 1
#define MINOR 0
#define PATCHLVL 1
#define BUILD 0

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define LSR_TAG LSR

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 0.5
