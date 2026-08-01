#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    int dup=num;
    if(dup<0) dup*=-1;
    if(dup<69) cout<<num<<" - Its Magnitude is Less than 69";
    else cout<<num<<" - Its Magnitude is Not Less than 69";
}