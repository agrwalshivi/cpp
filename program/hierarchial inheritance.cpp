#include <iostream>
using namespace std;

// Base class
class Mobile {
public:
    void displayBrand() {
        cout << "Brand: ";
    }
};

// Derived class 1
class Realme : public Mobile {
public:
    void displayRealme() {
        displayBrand();
        cout << "Realme" << endl;
    }
};

// Derived class 2
class Redmi : public Mobile {
public:
    void displayRedmi() {
        displayBrand();
        cout << "Redmi" << endl;
    }
};

// Derived class 3
class Samsung : public Mobile {
public:
    void displaySamsung() {
        displayBrand();
        cout << "Samsung" << endl;
    }
};

int main() {
    Realme rm;
    Redmi rd;
    Samsung sm;

    rm.displayRealme();
    rd.displayRedmi();
    sm.displaySamsung();

    return 0;
}