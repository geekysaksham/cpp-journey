#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String Of Even Length: ";
    getline(cin,str);
    cout<<"Second Half Of String = "<<str.substr(str.length()/2);
}