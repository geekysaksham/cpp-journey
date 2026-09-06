#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int count = 0;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch >= 65 && ch <= 90) ch += 32;
        if(ch == 'a') count++;
        else if(ch == 'e') count++;
        else if(ch == 'i') count++;
        else if(ch == 'o') count++;
        else if(ch == 'u') count++;
    }
    cout<<"Total Number Of Vowels = "<<count;
}