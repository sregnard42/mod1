/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:04:16 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:04:17 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mod1.h"

int main(int argc, char **argv)
{
    vector<vector<Point>> points;

    if (--argc != 1)
    {
        cout << "usage: ./mod1 file.mod1" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "File :\n"
         << read_file(argv[1]) << endl;
    points = parseFile(argv[1]);
    cout << "After isometric projection :\n"
         << Point::toString(points) << endl;

    cout << "### Constructing MVC" << endl;
    Model model;
    Controller controller(&model);
    View view(&model, &controller);
    cout << endl;

    cout << "### Something changed in controller" << endl;
    controller.updateAll();
    cout << endl;

    cout << "### Something changed in model" << endl;
    model.updateAll();
    exit(EXIT_SUCCESS);
}
