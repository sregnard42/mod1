/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:03:20 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:03:22 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_H
#define VIEW_H

#include "mod1.h"

class View : public Observer
{
private:
    Model *model;
    Controller *controller;

public:
    /* Constructor */
    View(Model *model, Controller *controller);

    /* Class Name */
    string getClassName(void);

    /* Observer */
    void update(void);
    
    /* View */
    void updateFromModel(void);
    void updateFromController(void);
};

#endif
