#include<iostream>
using namespace std;
int main(){
    //99 95 91 87 83 79.........

    //Method 1
    // int k = 99;
    // for(int i=1;i<=25;i++){
    //     cout<<k<<" ";
    //     k-=4;
    // }

    //Method 2
    for(int i=99;i>0;i-=4){
        cout<<i<<" ";
    }

}