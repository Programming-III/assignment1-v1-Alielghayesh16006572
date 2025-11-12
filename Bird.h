#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Bird: public Animal{
private:
    float wingSpan;
public:
    Bird(float wingSpan,string name, int age, bool isHungry);
    Bird();
    ~Bird();
    float setWingSpan(float wingSpan);
    float getWingSpan();
    
};


#endif // BIRD_H_INCLUDED
