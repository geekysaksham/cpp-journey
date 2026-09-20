#include<iostream>
using namespace std;
int exponent(int base, int power){
    if(power == 0) return 1;
    int halfAns = exponent(base, power/2);
    if(power % 2 == 0) return halfAns * halfAns;
    else return halfAns * halfAns * base;
}
int main(){
    int base, power;
    cout<<"Enter Base Number : ";
    cin>>base;
    cout<<"Enter Power : ";
    cin>>power;
    cout<<exponent(base,power);
}