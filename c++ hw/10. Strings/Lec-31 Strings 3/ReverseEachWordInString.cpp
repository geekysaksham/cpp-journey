#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string rev(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}
int main(){
    string str;
    string ans;
    cout<<"Enter String: ";
    getline(cin,str);
    int i=0, j=0;
    int n = str.size();
    int len;
    while(j<n){
        if(str[j]!=' ') j++;
        else{
            len = j-i;
            ans += rev(str.substr(i,len));
            ans += " ";
            i=j+1;
            j=i;
        }
    }
    len = j-i;
    ans += rev(str.substr(i,len));
    // reverse(ans.begin(),ans.end()); // to reverse whole string
    cout<<ans;
}