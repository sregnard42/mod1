#ifndef MAP_H
#define MAP_H

#include "mod1.h"

class Map
{
private:
    Cell ***cells;

public:
    /* Constructor */
    Map(Point max);
};

#endif