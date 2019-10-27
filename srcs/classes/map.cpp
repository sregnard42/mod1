#include "mod1.h"

Map::Map(Point max)
{
    this->cells = NULL;
    max += Point();
    /*
    this->cells = new Cell **[max.getX()]();
    for (int i = 0; i < max.getX(); i++)
    {
        this->cells[i] = new Cell *[max.getY()]();
        for (int j = 0; j < max.getY(); j++)
        {
            this->cells[i][j] = new Cell [max.getZ()]();
            for (int k = 0; k < max.getZ(); k++)
            {
                this->cells[i][j][k] = Cell(Point(i, j, k));
            }
        }
    }
    */
}