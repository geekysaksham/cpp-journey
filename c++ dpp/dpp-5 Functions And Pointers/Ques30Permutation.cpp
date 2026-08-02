#include<iostream>
using namespace std;
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact *= i;
    }
    return fact;
}
int findPermutation(int n, int r){
    int nfact = factorial(n);
    int nrfact = factorial(n-r);
    return nfact/(nrfact);
}
int main(){
    int n,r;
    cin>>n>>r;
    int permutation = findPermutation(n,r);
    cout<<permutation;
}