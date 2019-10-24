#include "mod1.h"

int main(int argc, char **argv)
{
	vector<vector<Point>> points;

    if (--argc != 1)
    {
        cout << "usage: ./mod1 file.mod1" << endl;
        exit(EXIT_FAILURE);
    }
    points = parseFile(argv[1]);
    cout << "File parsing done ! Results :\n" << Point::toString(points);
    exit(EXIT_SUCCESS);
}
