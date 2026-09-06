#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(i%2 == 0) str[i] = 'a';
    }
    cout<<str;
}