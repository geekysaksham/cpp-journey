#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter Length of Rectangle : ";
    cin>>length;
    int breadth;
    cout<<"Enter Breadth of Rectangle : ";
    cin>>breadth;
    int area=length*breadth;
    int perimeter=2*(length+breadth);
    if(area>perimeter) cout<<"Area is Greater Than Perimeter";
    else if(area<perimeter) cout<<"Perimeter is Greater Than Area";
    else cout<<"Area is Equal to Perimeter";
}