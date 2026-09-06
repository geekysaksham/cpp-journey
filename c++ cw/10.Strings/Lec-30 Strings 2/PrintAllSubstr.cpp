#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int n = str.length();
    for(int i=0;i<str.length();i++){
        for(int j=1;j<=n;j++){
            cout<<str.substr(i,j)<<endl;
        }
        n--;
    }
}