#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int n = str.length();
    int i=0, j=0, len;
    int maxlen = 0;
    string maxstr = "";
    while(j<n){
        if(str[j] != ' ') j++;
        else{
            len = j-i;
            if(len>maxlen){
                maxlen = len;
                maxstr = str.substr(i,len);
            }
            i=j;
            while(i<n && str[i]==' '){
                i++;
                j++;
            }
        }
    }
    len = j-i;
    if(len>maxlen){
            maxlen = len;
            maxstr = str.substr(i,j);
        }
    cout<<"Max String = "<<maxstr<<endl<<"Its Length = "<<maxlen<<endl;
}