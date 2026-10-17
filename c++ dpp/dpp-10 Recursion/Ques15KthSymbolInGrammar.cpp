#include<iostream>
using namespace std;
// string nthRow(int n, string s = "0", int i = 1){
//     if(i==n) return s;
//     string ans = "";
//     for(int i=0;i<s.length();i++){
//         if(s[i] == '0') ans += "01";
//         else if(s[i] == '1') ans += "10";
//     }
//     return nthRow(n, ans, i+1);
// }
// char kthSymbol(int k, string str){
//     return str[k-1];    
// }
char kthSymbol(int n, int k){
    if(n==1) return '0';
    char parent = kthSymbol(n-1, (k+1)/2);
    if(k%2 == 0){
        if(parent == '1') return '0';
        else return '1';
    }
    else return parent;
}
int main(){
    int n, k;
    cout<<"Enter Row Number : ";
    cin>>n;
    cout<<"Enter Kth Number : ";
    cin>>k;
    // string str = nthRow(n);
    // cout<<"Kth Symbol = "<<kthSymbol(k,str);
    cout<<"Kth Symbol = "<<kthSymbol(n,k);
}