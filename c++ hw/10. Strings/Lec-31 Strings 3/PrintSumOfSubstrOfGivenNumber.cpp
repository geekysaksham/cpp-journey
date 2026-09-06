#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter Number String: ";
    getline(cin,str);
    int n = str.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            sum += stoi(str.substr(i,j));
        }
    }
    cout<<"Sum of all Substrings = "<<sum;
}