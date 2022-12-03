#include "recipe.h"

typedef struct bakery
{
    // ingredients
    int flour;
    int cocoa_powder;
    int baking_powder;
    int baking_soda;
    int salt;
    int butter;
    int sugar;
    int vanilla;
    int eggs;
    int milk;
    int cream;
    int powdered_suga;
    // equipment
    int sink;
    int oven;
    int stand_mixer;
} Bakery;

typedef struct baker
{
    int stationNumber;
    Recipe recipe;
    int dishCounter;
    char name[40];
} Baker;