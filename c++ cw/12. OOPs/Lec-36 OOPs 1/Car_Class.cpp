#include<iostream>
#include<string>
using namespace std;
class Car{ //User Defined Data Type
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
    void print(){
        cout<<name<<" "<<power<<" "<<mileage<<" "<<isE20Compatible<<endl;
    }
};

// void print2(Car c){
//     cout<<c.name<<" "<<c.power<<" "<<c.mileage<<" "<<c.isE20Compatible<<endl;
// }

int main(){
    Car c1;
    c1.name = "Kia Sonet";
    c1.power = 118;
    c1.mileage = 9.2;
    c1.isE20Compatible = true;

    Car c2 = {"Toyota Fortuner", 200, 7.6, false};

    c1.print();
    // print2(c2);
}