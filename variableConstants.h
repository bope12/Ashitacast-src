#ifndef __ASHITA_variableConstants_H_INCLUDED__
#define __ASHITA_variableConstants_H_INCLUDED__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include <map>
#include <stdint.h>
#include <string>
using namespace std;

#define ABILITY_MAX 971

map<uint16_t, string> gSpellElements = {
    {0, "fire"},
    {1, "ice"},
    {2, "wind"},
    {3, "earth"},
    {4, "thunder"},
    {5, "water"},
    {6, "light"},
    {7, "dark"},
    {15, "nonelemental"}};

map<uint16_t, string> gSpellSkills = {
    {32, "divinemagic"},
    {33, "healingmagic"},
    {34, "enhancingmagic"},
    {35, "enfeeblingmagic"},
    {36, "elementalmagic"},
    {37, "darkmagic"},
    {38, "summoning"},
    {39, "ninjutsu"},
    {40, "singing"},
    {43, "bluemagic"},
    {44, "geomancy"}};

map<uint16_t, string> gSpellTypes = {
    {1, "whitemagic"},
    {2, "blackmagic"},
    {3, "summoning"},
    {4, "ninjutsu"},
    {5, "bardsong"},
    {6, "bluemagic"}
};

map<uint16_t, string> gAbilTypes = {
    {10, "runeenchantment"},
    {102, "ready"},
    {173, "bloodpactrage"},
    {174, "bloodpactward"},
    {193, "corsairroll"},
    {195, "quickdraw"},
    {217, "waltz"}};

map<uint32_t, string> gSpawnFlags = {
    {0x01, "pc"},
    {0x02, "npc"},
    {0x09, "alliance"},
    {0x0D, "party"},
    {0x10, "monster"}};

map<uint8_t, string> gWeekDay = {
    {0, "firesday"},
    {1, "earthsday"},
    {2, "watersday"},
    {3, "windsday"},
    {4, "iceday"},
    {5, "lightningday"},
    {6, "lightsday"},
    {7, "darksday"}};

map<uint8_t, string> gWeekDayElement = {
    {0, "fire"},
    {1, "earth"},
    {2, "water"},
    {3, "wind"},
    {4, "ice"},
    {5, "thunder"},
    {6, "light"},
    {7, "dark"}};

map<uint8_t, string> gWeather = {
    {0, "clear"},
    {1, "sunshine"},
    {2, "clouds"},
    {3, "fog"},
    {4, "fire"},
    {5, "firex2"},
    {6, "water"},
    {7, "waterx2"},
    {8, "earth"},
    {9, "earthx2"},
    {10, "wind"},
    {11, "windx2"},
    {12, "ice"},
    {13, "icex2"},
    {14, "thunder"},
    {15, "thunderx2"},
    {16, "light"},
    {17, "lightx2"},
    {18, "dark"},
    {19, "darkx2"}};

map<int16_t, string> gStormWeather = {
    {178, "fire"},
    {179, "ice"},
    {180, "wind"},
    {181, "earth"},
    {182, "thunder"},
    {183, "water"},
    {184, "light"},
    {185, "dark"},
    {589, "firex2"},
    {590, "icex2"},
    {591, "windx2"},
    {592, "earthx2"},
    {593, "thunderx2"},
    {594, "waterx2"},
    {595, "lightx2"},
    {596, "darkx2"}};

map<uint8_t, string> gWeatherElement = {
    {0, "none"},
    {1, "none"},
    {2, "none"},
    {3, "none"},
    {4, "fire"},
    {5, "fire"},
    {6, "water"},
    {7, "water"},
    {8, "earth"},
    {9, "earth"},
    {10, "wind"},
    {11, "wind"},
    {12, "ice"},
    {13, "ice"},
    {14, "thunder"},
    {15, "thunder"},
    {16, "light"},
    {17, "light"},
    {18, "dark"},
    {19, "dark"}};

map<int16_t, string> gStormWeatherElement = {
    {178, "fire"},
    {179, "ice"},
    {180, "wind"},
    {181, "earth"},
    {182, "thunder"},
    {183, "water"},
    {184, "light"},
    {185, "dark"},
    {589, "fire"},
    {590, "ice"},
    {591, "wind"},
    {592, "earth"},
    {593, "thunder"},
    {594, "water"},
    {595, "light"},
    {596, "dark"}};

map<uint32_t, string> gEntityStatus = {
    {0, "idle"},
    {1, "engaged"},
    {2, "dead"},
    {3, "dead"},
    {4, "zoning"},
    {33, "resting"}};

map<int32_t, uint8_t> gMoonPhasePct = {
    {0, 100},
    {1, 98},
    {2, 95},
    {3, 93},
    {4, 90},
    {5, 88},
    {6, 86},
    {7, 83},
    {8, 81},
    {9, 79},
    {10, 76},
    {11, 74},
    {12, 71},
    {13, 69},
    {14, 67},
    {15, 64},
    {16, 62},
    {17, 60},
    {18, 57},
    {19, 55},
    {20, 52},
    {21, 50},
    {22, 48},
    {23, 45},
    {24, 43},
    {25, 40},
    {26, 38},
    {27, 36},
    {28, 33},
    {29, 31},
    {30, 29},
    {31, 26},
    {32, 24},
    {33, 21},
    {34, 19},
    {35, 17},
    {36, 14},
    {37, 12},
    {38, 10},
    {39, 7},
    {40, 5},
    {41, 2},
    {42, 0},
    {43, 2},
    {44, 5},
    {45, 7},
    {46, 10},
    {47, 12},
    {48, 14},
    {49, 17},
    {50, 19},
    {51, 21},
    {52, 24},
    {53, 26},
    {54, 29},
    {55, 31},
    {56, 33},
    {57, 36},
    {58, 38},
    {59, 40},
    {60, 43},
    {61, 45},
    {62, 48},
    {63, 50},
    {64, 52},
    {65, 55},
    {66, 57},
    {67, 60},
    {68, 62},
    {69, 64},
    {70, 67},
    {71, 69},
    {72, 71},
    {73, 74},
    {74, 76},
    {75, 79},
    {76, 81},
    {77, 83},
    {78, 86},
    {79, 88},
    {80, 90},
    {81, 93},
    {82, 95},
    {83, 98}};

map<int32_t, string> gMoonPhase = {
    {0, "fullmoon"},
    {1, "fullmoon"},
    {2, "fullmoon"},
    {3, "waninggibbous"},
    {4, "waninggibbous"},
    {5, "waninggibbous"},
    {6, "waninggibbous"},
    {7, "waninggibbous"},
    {8, "waninggibbous"},
    {9, "waninggibbous"},
    {10, "waninggibbous"},
    {11, "waninggibbous"},
    {12, "waninggibbous"},
    {13, "waninggibbous"},
    {14, "waninggibbous"},
    {15, "waninggibbous"},
    {16, "waninggibbous"},
    {17, "lastquarter"},
    {18, "lastquarter"},
    {19, "lastquarter"},
    {20, "lastquarter"},
    {21, "lastquarter"},
    {22, "lastquarter"},
    {23, "lastquarter"},
    {24, "lastquarter"},
    {25, "waningcrescent"},
    {26, "waningcrescent"},
    {27, "waningcrescent"},
    {28, "waningcrescent"},
    {29, "waningcrescent"},
    {30, "waningcrescent"},
    {31, "waningcrescent"},
    {32, "waningcrescent"},
    {33, "waningcrescent"},
    {34, "waningcrescent"},
    {35, "waningcrescent"},
    {36, "waningcrescent"},
    {37, "waningcrescent"},
    {38, "newmoon"},
    {39, "newmoon"},
    {40, "newmoon"},
    {41, "newmoon"},
    {42, "newmoon"},
    {43, "newmoon"},
    {44, "newmoon"},
    {45, "waxingcrescent"},
    {46, "waxingcrescent"},
    {47, "waxingcrescent"},
    {48, "waxingcrescent"},
    {49, "waxingcrescent"},
    {50, "waxingcrescent"},
    {51, "waxingcrescent"},
    {52, "waxingcrescent"},
    {53, "waxingcrescent"},
    {54, "waxingcrescent"},
    {55, "waxingcrescent"},
    {56, "waxingcrescent"},
    {57, "waxingcrescent"},
    {58, "firstquarter"},
    {59, "firstquarter"},
    {60, "firstquarter"},
    {61, "firstquarter"},
    {62, "firstquarter"},
    {63, "firstquarter"},
    {64, "firstquarter"},
    {65, "firstquarter"},
    {66, "waxinggibbous"},
    {67, "waxinggibbous"},
    {68, "waxinggibbous"},
    {69, "waxinggibbous"},
    {70, "waxinggibbous"},
    {71, "waxinggibbous"},
    {72, "waxinggibbous"},
    {73, "waxinggibbous"},
    {74, "waxinggibbous"},
    {75, "waxinggibbous"},
    {76, "waxinggibbous"},
    {77, "waxinggibbous"},
    {78, "waxinggibbous"},
    {79, "waxinggibbous"},
    {80, "fullmoon"},
    {81, "fullmoon"},
    {82, "fullmoon"},
    {83, "fullmoon"}};
#endif