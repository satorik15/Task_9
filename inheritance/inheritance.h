#ifndef INHERITANCE_H
#define INHERITANCE_H
using namespace std;
#include <iostream>
class Property 
{
private:

    int worth{};
public:
    Property(int = 0);

    int getWorth() const {
        return worth;
    }

    void setWorth(int worth) {
        Property::worth = worth;
    }

    virtual int tax() = 0;
};
class Apartment : public Property {
public:
    Apartment(int a);

    int tax();
};
class Car :public Property {
public:
    Car(int a);
    int tax();
};
class CountryHouse :public Property {
public:
    CountryHouse(int a);

    int tax();
};
#endif // !INHERITANCE_H
