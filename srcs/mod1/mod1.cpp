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
	Point p1 = Point(100, 100);
	Point p2 = Point(200, 200);

	// Liste de points
	std::vector<Point> points;
    points.push_back(p);
    points.push_back(p);
    points.push_back(p);
    points.push_back(p);
    points.push_back(p);
    points.push_back(p);
    points.push_back(Point(21, 42));
    points.insert(points.begin(), p1);
    points.insert(points.begin(), p2);
    for (Point pl : points)
        std::cout << pl.toString() << std::endl;
    return 0;
}
