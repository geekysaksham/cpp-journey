#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter 1st Number : ";
    cin>>n1;
    cout<<"Enter 2nd Number : ";
    cin>>n2;
    cout<<"Enter 3rd Number : ";
    cin>>n3;
    if(n1>=n2 && n1>=n3) cout<<"Greatest Number = "<<n1;
    else if(n2>=n1 && n2>=n3) cout<<"Greatest Number = "<<n2;
    else cout<<"Greatest Number = "<<n3;
}