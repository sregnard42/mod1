#ifndef OBSERVER_H
# define OBSERVER_H

# include "mod1.h"

class Observer {
public:
    virtual     ~Observer() {};
    virtual void update(void) = 0;
};

#endif