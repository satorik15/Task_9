#include "inheritance.h"
Property::Property(int a) {
    setWorth(a);
}

Apartment::Apartment(int a) : Property(a) {}
int Apartment::tax() {
    return getWorth() / 1000;
}


int Car::tax() {
    return getWorth() / 200;
}
Car::Car(int a) : Property(a) {
}

int CountryHouse::tax() {
    return getWorth() / 500;
}
CountryHouse::CountryHouse(int a) : Property(a) {}
