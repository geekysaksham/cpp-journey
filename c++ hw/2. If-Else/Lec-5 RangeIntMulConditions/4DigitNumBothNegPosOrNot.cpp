#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    if(num<-999 && num>-10000 || num>999 && num<10000) cout<<num<<" is a 4 digit Number.";
    else cout<<num<<" is not a 4 digit number.";

}