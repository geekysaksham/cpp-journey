#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"Enter the radius of the sphere: ";
    cin>>radius;
    float volume = (4.0/3)*3.14159*radius*radius*radius;
    cout<<"The volume of sphere = "<<volume;
}