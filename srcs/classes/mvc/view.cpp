/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:04:22 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:04:24 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mod1.h"

View::View(Model *model, Controller *controller)
{
    cout << "View::View()" << endl;
    this->model = model;
    this->controller = controller;
    this->model->addObs(this);
    this->controller->addObs(this);
}

void View::update(void)
{
    cout << "View::Update()" << endl;
    if (this->model->updateNeeded())
        this->updateFromModel();
    if (this->controller->updateNeeded())
        this->updateFromController();
}

void View::updateFromModel(void)
{
    cout << "View::updateFromModel()" << endl;
    this->model->updateFinished();
}

void View::updateFromController(void)
{
    cout << "View::updateFromController()" << endl;
    this->controller->updateFinished();
}

string View::getClassName(void)
{
    return ("View");
}