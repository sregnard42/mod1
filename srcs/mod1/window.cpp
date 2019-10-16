#include "mod1.h"

Window::Window(int width, int height)
{
    this->width = width;
    this->height = height;
}

int Window::getWidth()
{
    return this->width;
}

void Window::setWidth(int width)
{
    this->width = width;
}

int Window::getHeight()
{
    return this->height;
}

void Window::setHeight(int height)
{
    this->height = height;
}
std::string Window::toString()
{
    return ("Window size : " + std::to_string(this->width) + " x " + std::to_string(this->height));
}