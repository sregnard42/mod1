#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "mod1.h"

class Controller: public Observable, Observer
{
private:
    vector<Observer> obs;
    Model model;

public:
    /* Constructor */
    Controller(void);
    Controller(Model model);

    /* Observable */
    void    addObs(Observer obs);
    void    delObs(Observer obs);
    void    updateAll(void);
    void    updateNeeded(void);
    void    updateFinished(void);

    /* Observer */
    void    update(void);
};

#endif