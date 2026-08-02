#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Odd Number >= 3 : ";
    cin>>n;
    if(n%2==0 || n<3) cout<<"Invalid Input";
    else{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==1 || j==1 || i==n || j==n || i==(n/2+1) || j==(n/2+1)) cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
    }
}