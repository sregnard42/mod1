/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   model.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:04:20 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/27 15:23:08 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mod1.h"

Model::Model(void)
{
    cout << "Model::Model()" << endl;
}

string Model::getClassName(void)
{
    return ("Model");
}

void Model::init(char *file)
{
    this->points = parseFile(*this, file);
	cout	<< "Points\n"
			<< Point::toString(points) << endl;
    this->map = new Map(this->max);
}

void Model::compareMax(Point p)
{
    if (this->max.getX() < p.getX())
        this->max.setX(p.getX());
    if (this->max.getY() < p.getY())
        this->max.setY(p.getY());
    if (this->max.getZ() < p.getZ())
        this->max.setZ(p.getZ());
}
