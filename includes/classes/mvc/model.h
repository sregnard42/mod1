/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   model.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:03:17 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:03:19 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODEL_H
#define MODEL_H

#include "mod1.h"

class Model : public Observable
{
private:
    vector<vector<Point>> points;
    Point max;
    Map *map;
public:
    /* Constructor */
    Model(void);

    /* Class Name */
    string getClassName(void);

    /* Model */
    void init(char *file);
    void compareMax(Point p);
};

#endif
