/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:04:19 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:04:20 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mod1.h"

Controller::Controller(Model *model)
{
    cout << "Controller::Controller()" << endl;
    this->model = model;
    this->model->addObs(this);
}

string Controller::getClassName(void)
{
    return ("Controller");
}

void Controller::update(void)
{
    this->updateAll();
}