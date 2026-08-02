#include<iostream>
using namespace std;
int main(){
    double m,v;
    cout<<"Enter Object's Mass : ";
    cin>>m;
    cout<<"Enter Object's Velocity : ";
    cin>>v;
    double KE = 0.5*m*v*v;
    cout<<"Kinetic Energy Of Object = "<<KE;
}