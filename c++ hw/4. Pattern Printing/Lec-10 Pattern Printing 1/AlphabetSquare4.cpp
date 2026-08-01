#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number n <= 26 : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2 != 0) cout<<(char)(i+96)<<" ";
            else cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}