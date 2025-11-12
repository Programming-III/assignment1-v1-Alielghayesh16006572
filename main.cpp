#include <iostream>
#include <string>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
using namespace std;

Animal::Animal(string name, int age, bool isHungry){
this->name = name;
this->age = age;
this->isHungry = isHungry;
}
Animal::Animal(){
this->name = "none";
this->age = 0;
this->isHungry = false;
}
Animal::~Animal(){
}
string Animal::setName(string name){
this->name = name;
}
string Animal::getName(){
return name;
}
int Animal::setAge(int age){
this->age = age;
}
int Animal::getAge(){
return age;
}
bool Animal::setIsHungry(bool isHungry){
    this->isHungry= isHungry;
}
bool Animal::getIsHungry(){
return isHungry;
}
void Animal::display(){
cout<<name<<endl;
cout<<age<<endl;
cout<<isHungry<<endl;
}
void Animal::feed(){
if(getIsHungry()==true){
    cout<<"True"<<endl;
}
else{
    cout<<"False"<<endl;
}
}


 Mammal::Mammal(string furColor,string name, int age, bool isHungry): Animal(string name, int age, bool isHungry){
 this->furColor = furColor;
 this->name = name;
 this->age = age;
 this->isHungry = isHungry;
 
 }  
 Mammal::Mammal(): Animal(){
 this->furColor = "none";
  this->name = "none";
 this->age = 0;
 this->isHungry = false;
 }
 Mammal::~Mammal(): ~Animal(){
 }
 string Mammal::setFurColor(string furColor){
 this->furColor = furColor;
 }
 string Mammal::getFurColor(){
 return furColor;
 }
 void Mammal::display(){
 cout<<name<<endl;
 cout<<age<<endl;
 cout<<isHungry<<endl;
 cout<<furColor<<endl;
 }




Bird::Bird(float wingSpan,string name, int age, bool isHungry){
this->wingSpan = wingSpan;
}
Bird::Bird(): Animal(){
    this->wingSpan = 0.0;
    this->name = "none";
    this->age = 0;
    this->isHungry = false;
}
Bird::~Bird(): ~Animal(){

}
float Bird::setWingSpan(float wingSpan){
 this->wingSpan = wingSpan;
}
float Bird::getWingSpan(){
return wingSpan;
}
 void Bird::display(){
 cout<<name<<endl;
 cout<<age<<endl;
 cout<<isHungry<<endl;
 cout<<furColor<<endl;
 }
Reptile::Reptile(bool isVenomous,string name, int age, bool isHungry): Animal(string name, int age, bool isHungry){
 this->isVenomous = isVenomous;
 this->name = name;
 this->age = age;
 this->isHungry = isHungry;
 }
 Reptile::Reptile(): Animal(){
 this->isVenomous = false;
  this->name = "none";
 this->age = 0;
 this->isHungry = false;
 }
 Reptile::~Reptile(): ~Animal(){
 }
bool isVenomous::setIsVenomous(bool isVenomous)){
 this->isVenomous = isVenomous;
}
bool isVenomous::getIsVenomous(){
return isVenomous;
}
 void Reptile::display(){
 cout<<name<<endl;
 cout<<age<<endl;
 cout<<isHungry<<endl;
 cout<<isVenomous<<endl;
 }
 Enclosure::Enclosure(int capacity,int currentCount){
 this->capacity = capacity;
 this->currentCount = currentCount
 this->Animal* = new animals[capacity];
 }
 Enclosure::Enclosure(){
 this->capacity = 0;
 this->currentCount = 0;
 }
 Enclosure::~Enclosure(){
 delete []animals;
 }
 int Enclosure::setCapacity(int capacity){
 this->capacity = capacity;
 }
    int Enclosure::getCapacity(){
    return capacity;
    }
    int Enclosure::setCurrentCount(int currentCount){
    this->currentCount = currentCount;
    }
    int Enclosure::getCurrentCount(){
    return currentCount;
    }
    void Enclosure::addAnimal(Animal* a){
    if(currentCount<Capacity){
    new animals[currentCount] = a;
    currentCount++; 
        
    }
    else{
        
        cout<<"error"<<endl;
    }
    }
    void Enclosure::displayAnimals(){
    for(int i = 0; i<currentCount; i++){
        cout<<animals[i].display()<<endl;
    }
    
    }
    
    Visitor::Visitor(string visitorName, int ticketsBought){
    this->visitorName = VisitorName;
    this->ticketsBought = ticketsBought;
    }
    Visitor::Visitor(){
    this->visitorName = "no";
    this->ticketsBought = 0;
    
    }
    Visitor::~Visitor(){
    }
    string Visitor:: setVisitorName(string visitorName);
    string Visitor::getVisitorName(){
    return visitorName;
    }
    int Visitor::setTicketsBought(int ticketsBought){
    this->ticketsBought = ticketsBought;
    }
    int Visitor::getTicketsBought(){
    return ticketsBought
    }
    void Visitor::displayInfo(){
    cout<<"Name: "<<visitorName<<endl;
    cout<<"tickets: "<<ticketsBought<<endl;
    
    
    }
    
    int main(){
    Mammal* m1("Lion",2,true);
    Bird* b1("Parrot",2,false);
    Reptile* s1("Snake",true,true);
    Visitor v1("Sarah Ali",3);
    Enclosure e1(100000,9000);
    e1.displayInfo();
    v1.displayInfo();
    
    }
 
   
    return 0;
}
