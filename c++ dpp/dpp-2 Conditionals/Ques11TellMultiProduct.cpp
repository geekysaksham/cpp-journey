#include<iostream>
using namespace std;
int main(){
    int a,b; //a,b->two numbers
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    if((a>0 && b<0) || (a<0 && b>0)) cout<<"Product is Negative";
    else if(a==0 || b==0) cout<<"Product is Zero";
    else cout<<"Product is Positive";
}