#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter Number : ";
    cin>>num;

    //Method 1
    // int k=1;
    // for(int i=num;i<=num*10;i+=num){
    //     cout<<num<<" * "<<k<<" = "<<i;
    //     k++;
    //     cout<<endl;
    // }

    //Method 2
    for(int i=1;i<=10;i++){
        cout<<num<<" * "<<i<<" = "<<num*i;
        cout<<endl;
    }

}