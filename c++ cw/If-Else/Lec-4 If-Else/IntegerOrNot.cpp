#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"Enter a Number : ";
    cin>>num;
    int dup=(int)num;
    if(num==dup) cout<<"Integer";
    else cout<<"Not An Integer";
}