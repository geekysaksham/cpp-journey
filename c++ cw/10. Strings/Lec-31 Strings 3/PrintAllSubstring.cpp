#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String Of Even Length: ";
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        for(int j=1;j<=str.length()-i;j++){
            cout<<str.substr(i,j)<<" ";
        }
        cout<<endl;
    }
}