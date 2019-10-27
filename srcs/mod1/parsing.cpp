/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:04:18 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/27 15:28:25 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mod1.h"

string read_file(char *file)
{
	ifstream ifs(file);
	string content;

	content.assign(
		(istreambuf_iterator<char>(ifs)),
		(istreambuf_iterator<char>()));
	return (content);
}

Point parsePoint(Model model, string s)
{
	int len = s.size();
	char cs[len + 1];
	int coord[3];

	s.copy(cs, len);
	cs[len] = '\0';
	bzero(coord, sizeof(int) * 3);
	sscanf(cs, "(%d, %d, %d)", &coord[0], &coord[1], &coord[2]);
	Point p = Point(coord[0], coord[1], coord[2]);
	model.compareMax(p);
	return (p);
}

vector<Point> parseLine(Model model, string line)
{
	vector<Point> points;
	stringstream iss(line);
	string s;

	while (iss >> s)
		points.push_back(parsePoint(model, s));
	return (points);
}

vector<vector<Point>> parseFile(Model model, char *file)
{
	vector<vector<Point>> points;
	ifstream input(file);
	string line;

	while (getline(input, line))
		points.push_back(parseLine(model, line));
	return (points);
}
