#include<iostream>
using namespace std;
class Scooty{ // Parent Class
public:
    int topSpeed;
    float mileage;
private:
    int bootSpace;
};
class Bike : public Scooty{ // Child Class -> Derived Class
public:
    int gears;
};
int main(){
    Bike b1;
    b1.topSpeed = 180;
    b1.mileage = 12.5;
    b1.gears = 6;
}