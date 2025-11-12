#ifndef MAMMAL_H_INCLUDED
#define MAMMAL_H_INCLUDED
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Mammal: public Animal{
    private:
string furColor;
    public: 
        Mammal(string furColor,string name, int age, bool isHungry);
        Mammal();
        ~Mammal();
        string setFurColor(string furColor);
        string getfurColor();
};



#endif // MAMMAL_H_INCLUDED
