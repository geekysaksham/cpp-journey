#include<iostream>
#include<string>
#include<climits>
using namespace std;

int gcd(int num1, int num2){
    int minimum = min(num1,num2);
    for(int i=minimum;i>=1;i--){
        if(num1%i==0 && num2%i==0) return i;
    }
    return 1;
}

class Fraction{
public:
    int num;
    int den;

    Fraction(int num, int den){
        this->num = num;
        this->den = den;
        simplify();
    } 

    void print(){
        cout<<num<<" / "<<den<<endl;
    }

    void multiply(Fraction f){
        // this->num *= f.num;
        // this->den *= f.den;

        num *= f.num;
        den *= f.den;
        simplify();
    }

    void add(Fraction f){
        // this->num = (this->num * f.den) + (this->den * f.num);
        // this->den = this->den * f.den;

        num = (num * f.den) + (den * f.num);
        den = den * f.den;
        simplify();
    }

    void simplify(){
        int hcf = gcd(num, den);
        num /= hcf;
        den /= hcf;
    }

    Fraction(){

    }
};

// Fraction multiply(Fraction& f1, Fraction& f2){
//     Fraction res;
//     res.num = f1.num * f2.num;
//     res.den = f1.den * f2.den;
//     return res;
// }

int main(){
    // Fraction f1(3,5);
    // Fraction f2(2,5);
    // f1.add(f2);
    // f1.print();

    // Fraction f1(2,3);
    // Fraction f2(3,2);
    // f1.multiply(f2);
    // f1.print();

    // Fraction f3(4,88);
    // f3.simplify();
    // f3.print();

    // Fraction res = multiply(f1, f2);
    // f1.print();
    // f2.print();
    // res.print();

    // int x = 20;
    // int y = 10;
    // x *= y; //x = 200   y = 20
}