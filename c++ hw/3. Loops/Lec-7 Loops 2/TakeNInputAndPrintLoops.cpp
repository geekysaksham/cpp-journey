#include<iostream>
using namespace std;
int main(){
    // 1
    // n
    // 2
    // n-1
    // 3
    // .
    // .
    // .
    // n
    // 1

    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    for(int i=1;i<=num;i++){
        cout<<i<<endl;
        cout<<num-i+1<<endl;
    }

}