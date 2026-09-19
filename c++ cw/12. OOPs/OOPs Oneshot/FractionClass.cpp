#include<iostream>
#include<climits>
using namespace std;
int gcd(int num1, int num2){
    int mini = min(num1,num2);
    for(int i = mini; i >= 1; i--){
        if(num1 % i == 0 && num2 % i == 0) return i;
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
    }
    void display(){
        Fraction newFrac = Fraction(num,den);
        newFrac.simplify();
        cout<<newFrac.num<<" / "<<newFrac.den<<endl;
    }
    Fraction operator+(Fraction f){
        int newNum = this->num * f.den + f.num * this->den;
        int newDen = this->den * f.den;
        Fraction newFrac(newNum, newDen);
        newFrac.simplify();
        return newFrac;
    }
    Fraction operator-(Fraction f){
        int newNum = this->num * f.den - f.num * this->den;
        int newDen = this->den * f.den;
        Fraction newFrac(newNum, newDen);
        newFrac.simplify();
        return newFrac;
    }
    Fraction operator*(Fraction f){
        int newNum = this->num * f.num;
        int newDen = this->den * f.den;
        Fraction newFrac(newNum, newDen);
        newFrac.simplify();
        return newFrac;
    }
    Fraction operator/(Fraction f){
        int newNum = this->num * f.den;
        int newDen = this->den * f.num;
        Fraction newFrac(newNum, newDen);
        newFrac.simplify();
        return newFrac;
    }
    void simplify(){
        int hcf = gcd(this->num, this->den);
        this->num /= hcf;
        this->den /= hcf;
    }
};
int main(){
    Fraction f1(1,2);
    Fraction f2(1,4);
    cout<<"Fraction 1 : ";
    f1.display();
    cout<<"Fraction 2 : ";
    f2.display();

    //Addition
    Fraction addRes = f1 + f2;
    cout<<"Fraction Addition = ";
    addRes.display();

    // Subtraction
    Fraction subRes = f1 - f2;
    cout<<"Fraction Subtraction = ";
    subRes.display();

    //Multiplication
    Fraction mulRes = f1 * f2;
    cout<<"Fraction Multiplication = ";
    mulRes.display();

    //Division
    Fraction divRes = f1 / f2;
    cout<<"Fraction Division = ";
    divRes.display();

    // Simplify
    cout<<"Simplified Fraction = ";
    f2.display();
}