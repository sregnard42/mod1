#include "mod1.h"

/* Observable */

void Observable::addObs(Observer *obs)
{
    cout << this->getClassName() << "::addObs("; 
    cout << obs->getClassName() << ")" << endl;
    this->obs.push_back(obs);
}

void Observable::updateAll(void)
{
    cout << this->getClassName() << "::updateAll()" << endl;
    this->needUpdate = true;
    for (Observer *obs : this->obs)
        obs->update();
}

bool Observable::updateNeeded(void)
{
    return (this->needUpdate);
}

void Observable::updateFinished(void)
{
    this->needUpdate = false;
    cout << this->getClassName() << "::updateFinished()" << endl;
}