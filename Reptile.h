#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Reptile: public Animal{
private:
    bool isVenomous;
public:
    Reptile(bool isVenomous,string name, int age, bool isHungry);
    Reptile();
    ~Reptile();
    bool setisVenomous(bool isVenomous);
    bool getisVenomous();

};



#endif // REPTILE_H_INCLUDED
