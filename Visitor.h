#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Visitor{
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor(string visitorName, int ticketsBought);
    Vistior();
    ~Visitor();
    string setVisitorName(string visitorName);
    string getVisitorName();
    int setTicketsBought(int ticketsBought);
    int getTicketsBought();
    void displayInfo();
};



#endif // VISITOR_H_INCLUDED
