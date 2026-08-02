#include<iostream>
using namespace std;
double calculateArea(double radius){
    return 3.14 * radius * radius;
}

double calculateArea(double length, double width){
    return length*width;
}
int main(){
    int input;
    double radius, length, width, area;
    cout<<"Type 1 for single input and 2 for double input : ";
    cin>>input;
    if(input==1){
        cout<<"Circle radius ";
        cin>>radius;
        area = calculateArea(radius);
        cout<<area;
    }
    else if(input==2){
        cout<<"Rectangle ";
        cin>>length>>width;
        area = calculateArea(length,width);
        cout<<area;
    }   
    else cout<<"Invalid Number of Inputs!";
}