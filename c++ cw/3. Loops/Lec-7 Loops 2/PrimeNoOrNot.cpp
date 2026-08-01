#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    bool flag=true;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            cout<<num<<" is Not a Prime No.";
            flag=false;
            break;
        }
    }
    if(flag==true) cout<<num<<" is a Prime No.";
}