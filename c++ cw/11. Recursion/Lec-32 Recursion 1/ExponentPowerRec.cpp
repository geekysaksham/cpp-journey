#include<iostream>
using namespace std;
int exponent(int base, int power){
    if(power == 0) return 1;
    return base * exponent(base, power-1);
}
int main(){
    int base, power;
    cout<<"Enter Base Number : ";
    cin>>base;
    cout<<"Enter Power : ";
    cin>>power;
    cout<<exponent(base,power);
}