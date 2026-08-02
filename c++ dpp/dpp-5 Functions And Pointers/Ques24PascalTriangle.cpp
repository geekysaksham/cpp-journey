#include<iostream>
using namespace std;
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r){
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    return nfact/(rfact*nrfact);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}