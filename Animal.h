#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Animal{
private:
    string name;
    int age;
    bool isHungry;
public:
    Animal(string name, int age, bool isHungry);
    Animal();
    ~Animal();
    string getName(string name);
    string getName();
    int setAge(int age);
    int getAge();
    bool setIsHungry(bool isHungry);
    bool getIsHungry();
    void display();
    void feed();

};
#endif // ANIMAL_H_INCLUDED
