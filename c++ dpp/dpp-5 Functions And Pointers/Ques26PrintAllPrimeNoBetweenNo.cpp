#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    int fact = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            fact++;
            break;
        }
    }
    if(fact==0) return true;
    else return false; 
}
int main(){
    int num;
    cin>>num;
    for(int i=2;i<=num;i++){
        if(isPrime(i)==true) cout<<i<<" ";
    }
}