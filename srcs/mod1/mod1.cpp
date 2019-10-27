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
    if (--argc != 1)
    {
        cout << "usage: ./mod1 file.mod1" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "File :\n"
         << read_file(argv[1]) << endl;

    cout << "### Constructing MVC" << endl;
    Model model;
    Controller controller(&model);
    View view(&model, &controller);
    cout << "### Constructing MVC" << endl;
    model.init(argv[1]);
    exit(EXIT_SUCCESS);
}
