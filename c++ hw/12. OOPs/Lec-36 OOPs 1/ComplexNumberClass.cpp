#include<iostream>
using namespace std;
class Complex{
public:
    double x;
    double y;
    Complex(int x, int y){
        this->x = x;
        this->y = y;
    }

    void print(){
        cout<<x<<" + "<<y<<"i"<<endl;
    }

    void add(Complex z){
        x += z.x;
        y += z.y;
    }

    void sub(Complex z){
        x -= z.x;
        y -= z.y;
    }

    void mul(Complex z){
        int temp = x;
        x = (x * z.x) - (y * z.y);
        y = (temp * z.y) + (y * z.x);
    }

    Complex(){

    }
};

int main(){
    //Print
    // Complex z1(3,4);
    // z1.print();

    //Addition
    // Complex z1(3,4);
    // Complex z2(7,9);
    // z1.print();
    // z2.print();
    // z1.add(z2);
    // z1.print();

    //Subtraction
    // Complex z1(13,12);
    // Complex z2(7,9);
    // z1.print();
    // z2.print();
    // z1.sub(z2);
    // z1.print();

    //Mutiplication
    Complex z1(2,3);
    Complex z2(5,1);
    z1.print();
    z2.print();
    z1.mul(z2);
    z1.print();

}