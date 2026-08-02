#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int nsp1 = n-1;
    int nsp2 = 0;
    for(int i=1;i<=2*n-1;i++){
        if(i==2) nsp2 = 1;
        for(int j=1;j<=nsp1;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=1;j<=nsp2;j++){
            cout<<" ";
        }
        if(i!=1 && i!=2*n-1) cout<<"*";
        cout<<endl;
        if(i<=n-1){
            nsp1--;
            nsp2 += 2;
        }
        else{
            nsp1++;
            nsp2 -=2;
        }

    }
}