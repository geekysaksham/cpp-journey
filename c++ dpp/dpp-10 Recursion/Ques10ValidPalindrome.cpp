#include<iostream>
#include<string>
using namespace std;
bool validPalindrome(string& s,int i, int j){
    if(i>=j) return true;
    if(s[i] != s[j]) return false;
    return validPalindrome(s,i+1,j-1);
}
int main(){
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    int len = str.length();
    string s;
    if(validPalindrome(str,0,len-1) == 1) s = "true";
    else s = "false";
    cout<<"Is Valid Palindrome = "<<s;
}