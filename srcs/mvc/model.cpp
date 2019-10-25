#include "mod1.h"

Model::Model(void)
{
    ;
}

/* Observable */

void    Model::addObs(Observer obs) { this->obs.push_back(obs); }
void    Model::delObs(Observer obs) { this->obs.pop_back(); }
void    Model::updateAll(void) {};
void    Model::updateNeeded(void) {};
void    Model::updateFinished(void) {};

/* Observer */

void    Model::update(void)
{
    ;
}