#ifndef
# define MOD1_H

# include <iostream>
# include <fstream>
# include <string>
# include <stdlib.h>
# include <SDL.h>

# include "window.h"
#include "point.h"

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;

std::string read_file(char * file);
void		display_window(int width, int heigh);

#endif
