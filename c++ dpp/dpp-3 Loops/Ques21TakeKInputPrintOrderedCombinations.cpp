#include<iostream>
using namespace std;
int main(){
    int k;
    cout<<"Enter K : ";
    cin>>k;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            cout<<i<<", "<<j<<endl;
        }
    }
}