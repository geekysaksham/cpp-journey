#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;
    if(num1%2!=0 && num2%2!=0) cout<<"Both are odd";
    else if(num1%2!=0 || num2%2!=0) cout<<"One is odd";
    else cout<<"None is odd";
}