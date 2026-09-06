#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String Of Even Length: ";
    getline(cin,str);
    int n = str.length();
    // reverse(str.begin(),str.end()-(n/2));
    int i = 0;
    int j = n/2-1;
    while(i<j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout<<str;
}