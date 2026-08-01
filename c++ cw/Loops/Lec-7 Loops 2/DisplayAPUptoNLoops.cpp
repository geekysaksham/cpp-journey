#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number of Terms : ";
    cin>>num;
     
    //2 5 8 11 14 17..........

    //Method 1
    // for(int i=2;i<=3*num-1;i+=3){
    //     cout<<i<<" ";
    // }

    //Method 2
    // int k=2;
    // for(int i=1;i<=num;i++){
    //     cout<<k<<" ";
    //     k += 3;
    // }

    //Method 3
    for(int i=1;i<=num;i++){
        cout<<3*i-1<<" ";
    }
}