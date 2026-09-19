#include<iostream>
using namespace std;
// int factorial(int n, int prod){
//     if(n==0) return prod;
//     prod *= n;
//     factorial(n-1, prod);
// }

int factorial(int n){
    if(n==0 || n==1) return 1;
    int ans = n * factorial(n-1);
    return ans;
}

int main(){
    int n;
    cout<<"Enter a Positive Number : ";
    cin>>n;
    // cout<<"Factorial Of Number = "<<factorial(n,1);
    cout<<"Factorial Of Number = "<<factorial(n);
}