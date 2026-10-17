#include<iostream>
#include<string>
using namespace std;
void reverse(string& s, int i, int j){
    if(i>=j) return;
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    reverse(s,i+1,j-1);
}
int main(){
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    int len = str.size();
    reverse(str,0,len-1);
    cout<<"Reverse String = "<<str;
}