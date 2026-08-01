#include<iostream>
using namespace std;
int x = 8;
int main(){
    int x = 56;
    ::x += 10;
    cout<<::x<<endl; //Scope Resolution Operator
}