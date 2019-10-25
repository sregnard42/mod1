/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:03:11 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:03:12 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOD1_H
# define MOD1_H

# include <stdlib.h>
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <vector>

using namespace std;

/* SDL */
# include <SDL.h>

/* Classes */
# include "window.h"
# include "point.h"

/* Observable / Observer */
# include "observer.h"
# include "observable.h"

/* MVC */
# include "model.h"
# include "controller.h"
# include "view.h"

string                  read_file(char * file);
void		            display_window(int width, int heigh);

/* Parsing */
Point                   parsePoint(string s);
vector<Point>           parseLine(string line);
vector<vector<Point>>   parseFile(char *file);

#endif
