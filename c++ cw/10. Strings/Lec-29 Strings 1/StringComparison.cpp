#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str1 = "abcdef";
    string str2 = "bca";
    // cout<<(str1 == str2);
    // sort(str2.begin(),str2.end());
    cout<<(str1 == str2)<<endl;
    if(str1 > str2) cout<<str1<<" is Greater";
    else cout<<str2<<" is Greater";
}