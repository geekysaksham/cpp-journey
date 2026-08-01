#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    // (num%2==0) ? cout<<num<<" is a Even Number" : cout<<num<<" is a Odd Number";
    cout<<((num%2==0) ? "Even Number" : "Odd Number");
}