#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n,int r){
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    return nfact/(rfact*nrfact);
}

int npr(int n,int r){
    int nfact = fact(n);
    int nrfact = fact(n-r);
    return nfact/nrfact;
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"Combination(ncr) = "<<ncr(n,r)<<endl;
    cout<<"Permutation(npr) = "<<npr(n,r)<<endl;
}