/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:04:14 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:04:15 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mod1.h"

Window::Window(int width, int height)
{
    this->width = width;
    this->height = height;
}

int Window::getWidth(void) { return this->width; }
int Window::getHeight(void) { return this->height; }
void Window::setWidth(int width) { this->width = width; }
void Window::setHeight(int height) { this->height = height; }

std::string Window::toString()
{
    return ("Window size : "
    + std::to_string(this->width) + "x"
    + std::to_string(this->height));
}
