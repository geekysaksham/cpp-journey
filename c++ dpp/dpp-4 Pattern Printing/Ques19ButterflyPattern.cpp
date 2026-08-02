#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int nst = 1;
    int nsp = 2*n-2;
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n){
            nst++;
            nsp -= 2;
        }
        if(i>n){
            nst--;
            nsp += 2;
        }
    }
}