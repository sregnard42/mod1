#include "mod1.h"

int main(int argc, char **argv)
{
    Window w;
	Point p;

    if (--argc)
        std::cout << read_file(argv[1]);
    w = Window(1280, 720);
    std::cout << w.toString() << "\n";
	display_window(SCREEN_WIDTH, SCREEN_HEIGHT);
	p = Point(400, 400);
	std::cout << p.toString();
    return 0;
}
