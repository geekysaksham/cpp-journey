#include<iostream>
using namespace std;
int main(){
    int n, a;
    cout<<"Enter n : ";
    cin>>n;
    int nsp1 = 0;
    int nsp2 = 2*n-1;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n) a = i;
        else a = 2*n-i;
       for(int j=1;j<=nsp1;j++){
        cout<<" ";
       }
       cout<<(char)(a+64);
       for(int j=1;j<=nsp2;j++){
        cout<<" ";
       }
       if(n != 1) cout<<(char)(a+64);
       cout<<endl;
       if(i<n){
        nsp1++;
        nsp2 -= 2;
       }
       else{
        nsp1--;
        nsp2 += 2;
       }
    }
}