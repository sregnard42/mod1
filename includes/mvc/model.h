#ifndef MODEL_H
#define MODEL_H

#include "mod1.h"

class Model: public Observable, Observer
{
private:
    vector<Observer> obs;
public:
    /* Constructor */
    Model(void);

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