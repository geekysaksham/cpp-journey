#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter Circle Radius: ";
    cin>>radius;
    float edge;
    cout<<"Enter Square Edge : ";
    cin>>edge;
    float AreaOfCircle = 3.14*radius*radius;
    float AreaOfSquare = edge*edge;
    float AreaOfShadedRegion = AreaOfSquare - AreaOfCircle;
    cout<<"Area Of Shaded Region = "<<AreaOfShadedRegion;
}