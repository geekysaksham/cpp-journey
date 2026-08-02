#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int nsp = n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<(char)(j+64);
        }
        for(int j=i;j>1;j--){
            cout<<(char)(j+63);
        }
        cout<<endl;
        nsp--;
    }
}