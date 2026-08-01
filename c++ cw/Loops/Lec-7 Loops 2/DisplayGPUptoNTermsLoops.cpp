#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number of Terms : ";
    cin>>num;

    //1 2 4 8 16..............

    //Method 1
    // int n = 1;
    // for(int i=1;i<=num-1;i++){
    //     n*=2;
    // }
    // for(int j=1;j<=n;j*=2){
    //     cout<<j<<" ";
    // }

    //Method 2
    int k = 1;
    for(int i=1;i<=num;i++){
        cout<<k<<" ";
        k*=2;
    }

}