#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character : ";
    cin>>ch;
    if(ch>='A' && ch<='Z') cout<<"Uppercase Alphabet";
    else if(ch>='a' && ch<='z') cout<<"Lowercase Alphabet";
    else if(ch>='0' && ch<='9') cout<<"Numeric Digit";
    else cout<<"Special Symbolic Character";
}