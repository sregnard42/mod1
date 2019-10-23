#include "mod1.h"

Point::Point(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

int Point::getX()
{
	return this->x;
}

int Point::getY()
{
	return this->y;
}

int Point::getZ()
{
	return this->z;
}

void Point::setX(int x)
{
	this->x = x;
}

void Point::setY(int y)
{
	this->y = y;
}

void Point::setZ(int z)
{
	this->z = z;
}

void Point::setPoint(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

std::string Point::toString()
{
    return ("(" + std::to_string(this->x) + ", " +
	std::to_string(this->y) + ", " +
	std::to_string(this->z) + ")");
}
