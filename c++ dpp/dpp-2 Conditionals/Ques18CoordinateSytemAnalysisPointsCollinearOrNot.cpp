#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Enter Three Coordinates -----> "<<endl;
    float x1,y1,x2,y2,x3,y3;
    cout<<"Enter 1st Coordinate : ";
    cin>>x1>>y1;
    cout<<"Enter 2nd Coordinate : ";
    cin>>x2>>y2;
    cout<<"Enter 3rd Coordinate : ";
    cin>>x3>>y3;
    if((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1)) cout<<"Points are Collinear";
    else cout<<"Points are not Collinear";
    
    // if(fabs((y2-y1)*(x3-x2)-(y3-y2)*(x2-x1))<1e-6) cout<<"Points are Collinear";
    //else cout<<"Points are not Collinear";
}