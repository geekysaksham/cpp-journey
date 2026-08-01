#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Odd Number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || (i+j-1) == n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}