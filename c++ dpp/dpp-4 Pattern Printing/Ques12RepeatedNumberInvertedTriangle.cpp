#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Positive Number : ";
    cin>>n;
    if(n<=0) cout<<"Invalid Input";
    else{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout<<n-i+1<<" ";
            }
            cout<<endl;
        }
    }
}