/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:02:03 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:02:04 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

class Point
{
private:
    int x;
    int y;
    int z;

public:
    /* Constructor */
    Point(int x = 0, int y = 0, int z = 0);

    /* Getters */
    int getX(void);
    int getY(void);
    int getZ(void);

    /* Setters */
    void setX(int x);
    void setY(int y);
    void setZ(int z);
    void setPoint(int x, int y, int z);

    /* Operations */
    void addX(int x);
    void addY(int y);
    void addZ(int z);

    /* Overloading */
    void operator+=(Point p);
    void operator-=(Point p);
    void operator*=(Point p);
    void operator/=(Point p);
    void operator%=(Point p);

    /* String output */
    string toString(void);
    static string toString(vector<Point> points);
    static string toString(vector<vector<Point>> points);

    /* Projection - 3D to 2D */
    void isometric(void);
};

#endif
