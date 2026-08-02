#include<iostream>
using namespace std;
int main(){
    int n,ias; //No. of sides,Interior angle sum 
    cout<<"Enter Polygon's No. of Sides : ";
    cin>>n;
    cout<<"Enter Interior Angles Sum : ";
    cin>>ias;
    int S = (n-2)*180;
    if(ias==S && n>=3) cout<<"Valid Polygon";
    else cout<<"Invalid Polygon";
}