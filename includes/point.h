#ifndef POINT_H
# define POINT_H

class Point
{
private:
    int x;
    int y;
    int z;

public:
    Point(int x = 0, int y = 0, int z = 0);
    int getX(void);
    int getY(void);
    int getZ(void);
    void setX(int x);
    void setY(int y);
    void setZ(int z);
    void setPoint(int x, int y, int z);
    string toString(void);
    static Point parsePoint(string s);
};

#endif
