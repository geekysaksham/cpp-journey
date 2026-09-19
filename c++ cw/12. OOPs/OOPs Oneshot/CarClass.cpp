#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    int seats;
    string type;

    Car(int p, string n, string t, int s){
        name = n;
        seats = s;
        type = t;
        price = p;
    }
};

void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

void change(Car& c){
    c.name = "Audi A8";
}

int main(){
    Car c1(1500000, "Honda City", "Sedan", 5);
    // c1.name = "Honda City";
    // c1.price = 1500000;
    // c1.seats = 5;
    // c1.type = "Sedan";

    print(c1);
    change(c1);
    print(c1);

    // Car c2;
    // c2.name = "Maruti Swift";
    // c2.price = 700000;
    // c2.seats = 5;
    // c2.type = "Hatchback";

    // Car c3;
    // c3.name = "Toyota Fortuner";
    // c3.price = 3600000;
    // c3.seats = 8;
    // c3.type = "SUV";

    // cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
    // print(c1);
    // print(c2);
    // print(c3);
}