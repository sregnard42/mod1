#ifndef MOD1_H
# define MOD1_H

# include <stdlib.h>
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <vector>

# include <SDL.h>

using namespace std;

# include "window.h"
# include "point.h"

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;

string                  read_file(char * file);
void		            display_window(int width, int heigh);

/* Parsing */
Point                   parsePoint(string s);
vector<Point>           parseLine(string line);
vector<vector<Point>>   parseFile(char *file);

#endif
