/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:04:09 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:04:13 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mod1.h"

Point::Point(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

int Point::getX(void) { return this->x; }
int Point::getY(void) { return this->y; }
int Point::getZ(void) { return this->z; }
void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }
void Point::setZ(int z) { this->z = z; }

void Point::setPoint(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point::addX(int x) { this->x += x; }
void Point::addY(int y) { this->y += y; }
void Point::addZ(int z) { this->z += z; }

void Point::operator+=(Point p) { this->setPoint(this->x + p.x, this->y + p.y, this->z + p.y); }
void Point::operator-=(Point p) { this->setPoint(this->x - p.x, this->y - p.y, this->z - p.y); }
void Point::operator*=(Point p) { this->setPoint(this->x * p.x, this->y * p.y, this->z * p.y); }
void Point::operator/=(Point p) { this->setPoint(this->x / p.x, this->y / p.y, this->z / p.y); }
void Point::operator%=(Point p) { this->setPoint(this->x % p.x, this->y % p.y, this->z % p.y); }

string Point::toString(void)
{
	return ("(" +
			std::to_string(this->x) + "," +
			std::to_string(this->y) + "," +
			std::to_string(this->z) + ")");
}

string Point::toString(vector<Point> points)
{
	string s;

	for (Point p : points)
		s += (p.toString() + ' ');
	return (s);
}

string Point::toString(vector<vector<Point>> points)
{
	string s;

	for (vector<Point> p : points)
		s += (Point::toString(p) + '\n');
	return (s);
}

void Point::isometric(void)
{
	this->x = (this->x - this->y) * 2;
	this->y = (this->x + this->y) - this->z * 2;
}
