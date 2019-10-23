#include "mod1.h"

vector<Point> process(string line)
{
    vector<Point> points;

    points.push_back(Point::parsePoint(line));
    return (points);
}

vector<vector<Point>> parsing(char *file)
{
    vector<vector<Point>> points;
    ifstream input(file);
    string line;

    while (getline(input, line))
        points.push_back(process(line));
    return (points);
}

int main(int argc, char **argv)
{
	vector<vector<Point>> points;

    if (--argc)
        points = parsing(argv[1]);
    else
        cout << "usage:\t./mod1 file.mod1" << endl;

    int i = 0;
    for (vector<Point> current : points)
    {
        cout << "Row no. " << ++i << '\t';
        for (Point point : current)
            cout << point.toString() << '\t';
        cout << endl;
    }
    
    return 0;
}
