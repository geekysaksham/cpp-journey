#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                cout<<i<<" ";
                n /= i;
            }
        }
        if(n==1) break;
    }
}