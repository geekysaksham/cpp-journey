#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter Sphere Radius : ";
    cin>>radius;
    float volume = (4.0/3)*3.14*radius*radius*radius;
    cout<<"Volume Of Sphere = "<<volume;
}