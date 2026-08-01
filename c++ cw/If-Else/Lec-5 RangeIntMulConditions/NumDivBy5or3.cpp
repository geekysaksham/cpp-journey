#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    if(num%5==0 || num%3==0) cout<<num<<" is divisible by 5 or 3";
    else cout<<num<<" is not divisible by 5 or 3";
}