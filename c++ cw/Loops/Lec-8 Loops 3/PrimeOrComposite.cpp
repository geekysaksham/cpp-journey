#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    bool flag=true;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<num<<" is Composite No.";
            flag=false;
            break;
        }
    }
    if(num==1) cout<<num<<" is Neither Prime Nor Composite";
    else if(flag==true) cout<<num<<" is a Prime No.";
}