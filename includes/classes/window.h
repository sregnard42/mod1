/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:03:09 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:03:10 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_H
#define WINDOW_H

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;

class Window
{
private:
    int height;
    int width;

public:
    Window(int width = SCREEN_WIDTH, int height = SCREEN_HEIGHT);
    int getWidth(void);
    int getHeight(void);
    void setWidth(int width);
    void setHeight(int height);
    string toString(void);
};

#endif
