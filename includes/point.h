class Point
{
private:
    int x;
    int y;
    int z;

public:
    Point(int x = 0, int y = 0, int z = 0);
    void getX(void);
    void getY(void);
    void getZ(void);
    void setX(int x);
    void setY(int y);
    void setZ(int z);
    void setPoint(int x, int y, int z);
    std::string toString(void);
};
