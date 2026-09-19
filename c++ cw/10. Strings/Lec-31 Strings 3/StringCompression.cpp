#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int i=0, j=0;
    int n = str.size();
    string ans = "";
    char ch;
    while(j<n){
        ch = str[i];
        if(str[j] == ch) j++;
        else{
            int len = j - i;
            ans.push_back(ch);
            if(len>1) ans.push_back(len+48);
            i=j;
        }
    }
    int len = j - i;
    ans.push_back(ch);
    if(len>1) ans.push_back(len+48);
    i=j;
    cout<<ans;
}