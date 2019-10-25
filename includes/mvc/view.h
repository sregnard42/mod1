#ifndef VIEW_H
#define VIEW_H

#include "mod1.h"

class View: public Observer 
{
private:
    Model model;
    Controller controller;

public:
    /* Constructor */
    View(Model model, Controller controller);
};

#endif