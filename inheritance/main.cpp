#include "inheritance.h"

int main() {
    Property** a = new Property * [7];
    a[0] = new Apartment(20000000);
    a[1] = new Apartment(40000000);
    a[2] = new Apartment(60000000);
    a[3] = new Car(8000000);
    a[4] = new Car(2000000);
    a[5] = new CountryHouse(25000000);
    a[6] = new CountryHouse(50000000);
    for (int i = 0; i < 7; i++) {
        cout << a[i]->tax() << endl;
        delete  a[i];
    }
    delete[] a;


    return 0;
}