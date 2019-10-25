/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   observer.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:03:25 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:03:26 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBSERVER_H
#define OBSERVER_H

#include "mod1.h"

class Observer
{
public:
    virtual ~Observer(){};
    virtual void update(void) = 0;
    virtual string getClassName(void) = 0;
};

#endif
