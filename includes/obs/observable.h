#ifndef OBSERVABLE_H
# define OBSERVABLE_H

# include "mod1.h"

class Observable {
public:
    virtual         ~Observable() {};
    virtual void    addObs(Observer obs) = 0;
    virtual void    delObs(Observer obs) = 0;
    virtual void    updateAll(void) = 0;
    virtual void    updateNeeded(void) = 0;
    virtual void    updateFinished(void) = 0;
};

#endif