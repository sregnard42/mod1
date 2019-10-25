#include "mod1.h"

Controller::Controller(void) { ; }
Controller::Controller(Model model)
{
    this->model = model;
}

/* Observable */

void    Controller::addObs(Observer obs) { this->obs.push_back(obs); }
void    Controller::delObs(Observer obs)
{   
    for (Observer observer : this->obs)
        observer == obs ? this->obs.pop_back() : 0;
}
void    Controller::updateAll(void) {};
void    Controller::updateNeeded(void) {};
void    Controller::updateFinished(void) {};

/* Observer */

void    Controller::update(void)
{
    ;
}