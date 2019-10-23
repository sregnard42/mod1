#ifndef WINDOW_H
# define WINDOW_H

class Window
{
private:
    int height;
    int width;

public:
    Window(int width = 1280, int height = 720);
    int getWidth(void);
    int getHeight(void);
    void setWidth(int width);
    void setHeight(int height);
    std::string toString(void);
};

#endif
