/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   observable.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:03:23 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:03:24 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "mod1.h"

class Observable
{
private:
    vector<Observer *> obs;
protected:
    bool needUpdate;

public:
    void addObs(Observer *obs);
    void updateAll(void);
    bool updateNeeded(void);
    void updateFinished(void);
    virtual string getClassName(void) = 0;
};

#endif
