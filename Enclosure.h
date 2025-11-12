#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Enclosure{
private:
    Animal* animals;
    int capacity;
    int currentCount;
public:
    Enclosure(int capacity,int currentCount);
    Enclosure();
    ~Enclosure();
    int setCapacity(int capacity);
    int getCapacity();
    int setCurrentCount(int currentCount);
    int getCurrentCount();
    void addAnimal(Animal* a);
    void displayAnimals();

};


#endif // ENCLOSURE_H_INCLUDED
