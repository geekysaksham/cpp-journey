#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x coordinate : ";
    cin>>x;
    cout<<"Enter y coordinate : ";
    cin>>y;
    if(x==0 && y==0) cout<<"("<<x<<","<<y<<") Lies on Origin";
    else if(y==0) cout<<"("<<x<<","<<y<<") Lies on x-axis";
    else if(x==0) cout<<"("<<x<<","<<y<<") Lies on y-axis";
    else if(x>0 && y>0) cout<<"("<<x<<","<<y<<") Lies in 1st Quadrant";
    else if(x<0 && y>0) cout<<"("<<x<<","<<y<<") Lies in 2nd Quadrant";
    else if(x<0 && y<0) cout<<"("<<x<<","<<y<<") Lies in 3rd Quadrant";
    else cout<<"("<<x<<","<<y<<") Lies in 4th Quadrant";
}