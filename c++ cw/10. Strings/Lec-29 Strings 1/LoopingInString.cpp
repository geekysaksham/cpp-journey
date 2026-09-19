#include<iostream>
#include<string>
using namespace std;
int main() {
    string str = "Saksham Jain";
    int n = str.length();
    // for(int i=0;i<n;i++){
    //     cout<<str[i];
    // }
    for(char ch : str){
        cout<<ch;
    }
}