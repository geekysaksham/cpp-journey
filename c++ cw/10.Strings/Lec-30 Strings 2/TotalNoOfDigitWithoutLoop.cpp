#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    string str = to_string(n);
    if(n >= 0) cout<<"Total Number Of Digits = "<<str.length();
    else cout<<"Total Number Of Digits = "<<str.length() - 1;
}