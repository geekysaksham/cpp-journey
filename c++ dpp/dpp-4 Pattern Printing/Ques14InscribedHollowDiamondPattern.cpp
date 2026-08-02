#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int nst = n;
    int nsp = 0;
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
            nst--;
            nsp += 2;
        }
        else if(i>n){
            nst++;
            nsp -= 2;
        }
    }
}