/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:03:14 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:03:15 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "mod1.h"

class Controller: public Observable, Observer
{
private:
    Model *model;

public:
    /* Constructor */
    Controller(Model *model);

    /* Class Name */    
    string getClassName(void);

    /* Observer */    
    void update(void);
};

#endif
