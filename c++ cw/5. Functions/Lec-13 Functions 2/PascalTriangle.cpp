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

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    //Method 1
    // for(int i=0;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<ncr(i,j)<<" ";
    //     }
    //     cout<<endl;
    // }

    //Method 2
    for(int i=0;i<=n;i++){
        int a = 1;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<a<<" ";
            a *= ((float)(i-j))/(j+1);
        }
        cout<<endl;
    }
}