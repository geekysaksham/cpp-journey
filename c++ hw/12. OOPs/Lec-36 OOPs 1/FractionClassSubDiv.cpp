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

    void sub(Fraction f){
        num = (num * f.den) - (den * f.num);
        den = den * f.den;
        simplify();
    }

    void div(Fraction f){
        num *= f.den;
        den *= f.num;
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


int main(){

    //Print and Simplify
    // Fraction f3(4,88);
    // f3.simplify();
    // f3.print();

    //Subtraction
    // Fraction f1(12,1);
    // Fraction f2(3,1);
    // f1.sub(f2);
    // f1.print();
    
    //Division
    Fraction f1(12,1);
    Fraction f2(3,1);
    f1.div(f2);
    f1.print();

}