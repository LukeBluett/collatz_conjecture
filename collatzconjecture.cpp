#include "collatzconjecture.h"

collatzconjecture::collatzconjecture(int startingPoint)
{
    collatzconjecture::steps = 0;
    collatzconjecture::number = startingPoint;
}

collatzconjecture::~collatzconjecture() {}

void collatzconjecture::setNumber(int number)
{
    collatzconjecture::number = number;
}

int collatzconjecture::getNumber()
{
    return collatzconjecture::number;
}

int collatzconjecture::getSteps()
{
    return collatzconjecture::steps;
}

void collatzconjecture::runRule()
{
    if ((collatzconjecture::number % 2) == 0)
        collatzconjecture::rule1();
    else
        collatzconjecture::rule2();

    collatzconjecture::addStep();
}

void collatzconjecture::rule1()
{
    collatzconjecture::number /= 2;
}

void collatzconjecture::rule2()
{
    collatzconjecture::number = (3 * collatzconjecture::number) + 1;
}

void collatzconjecture::addStep()
{
    collatzconjecture::steps += 1;
}
