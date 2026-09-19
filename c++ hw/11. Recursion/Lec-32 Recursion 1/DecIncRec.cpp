#include<iostream>
using namespace std;
void print(int n){
    cout<<n<<" ";
    if(n==1) return;
    print(n-1);
    cout<<n<<" ";
}
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    print(num);
}