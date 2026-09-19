#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    cout<<str.substr(0,3)<<endl; //0 se start, 3 length ka
    cout<<str.substr(1,3)<<endl; //1 se start, 3 length ka
    cout<<str.substr(2)<<endl; //2 to end
    cout<<str.substr(2,-1)<<endl; //2 to end
    cout<<str.substr(2,0)<<endl; //2 se start, 0 length ka
}