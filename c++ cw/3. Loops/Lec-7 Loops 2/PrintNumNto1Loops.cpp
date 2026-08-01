#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    
    //Method 1
    for(int i=num;i>=1;i--){
        cout<<i<<" ";
    }

    //Method 2
    // for(int i=1;i<=num;i++){
    //     cout<<1+num-i<<" ";
    // }
}