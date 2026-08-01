#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"Enter Principle Amount : ";
    cin>>p;
    cout<<"Enter Rate : ";
    cin>>r;
    cout<<"Enter Time : ";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"Simple Interest = ";
    cout<<si;
}