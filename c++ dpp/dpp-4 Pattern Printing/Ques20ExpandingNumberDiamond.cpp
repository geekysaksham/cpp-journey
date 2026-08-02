#include<iostream>
using namespace std;
int main(){
    int n, a, b;
    cout<<"Enter Number : ";
    cin>>n;
    int nsp = n-1;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n) a = i, b = i;
        else a = 2*n-i, b = 2*n-i;
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*a-1;j++){
            cout<<b<<" ";
            if(j<a) b++;
            else b--;
        }
        cout<<endl;
        if(i<n) nsp--;
        else nsp++;
    }
}