#include<iostream>
using namespace std;
class Vehicle{ // Parent Class
public:
    int topSpeed;
    float mileage;
    string fuel;
};

//MultiLevel Inheritance
class TwoWheeler : public Vehicle{ // Child Class -> Derived Class
public:

};
class FourWheeler : public Vehicle{ // Child Class -> Derived Class
public:

};
class Bike : public TwoWheeler{ // Child Class -> Derived Class
public:
    
};
class Scooty : public TwoWheeler{ // Child Class -> Derived Class
public:
    
};
class Truck : public Vehicle{ // Child Class -> Derived Class
public:
    
};
int main(){
    Bike b1;
    b1.topSpeed = 180;
    b1.mileage = 12.5;
}