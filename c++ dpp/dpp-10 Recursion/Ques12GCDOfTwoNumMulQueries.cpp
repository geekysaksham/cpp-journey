#include<iostream>
using namespace std;
int gcd(int n1, int n2){
    if(n1 == 0 || n1 == 1) return n1;
    if(n2%n1 == 0) return n1;
    return gcd(n2%n1,n1);
}
int main(){
    int q;
    cout<<"Enter Number Of Queries : ";
    cin>>q;
    while(q>0){
        int n1;
        cout<<"Enter Number 1 : ";
        cin>>n1;
        int n2;
        cout<<"Enter Number 2 : ";
        cin>>n2;
        if(n1<n2) cout<<"GCD = "<<gcd(n1,n2)<<endl;
        else cout<<"GCD = "<<gcd(n2,n1)<<endl;
        q--;
    }
}