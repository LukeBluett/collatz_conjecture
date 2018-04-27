#ifndef COLLATZCONJECTURE_H
#define COLLATZCONJECTURE_H


class collatzconjecture
{
public:
    collatzconjecture(int startingPoint);
    ~collatzconjecture();
    void runRule();
    void setNumber(int number);
    int getNumber();
    int getSteps();

private:
    int steps, number;

    void rule1();
    void rule2();
    void addStep();
};

#endif // COLLATZCONJECTURE_H
