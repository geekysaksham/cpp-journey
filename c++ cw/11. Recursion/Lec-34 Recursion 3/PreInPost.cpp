#include<iostream>
using namespace std;
void preInPost(int n){
    if(n==0) return;
    cout<<n<<" ";
    preInPost(n-1);
    cout<<n<<" ";
    preInPost(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    preInPost(n);
}