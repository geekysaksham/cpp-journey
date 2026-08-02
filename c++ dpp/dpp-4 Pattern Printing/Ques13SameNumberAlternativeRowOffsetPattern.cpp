#include<iostream>
using namespace std;
int main(){
    int n, j;
    cout<<"Enter Positive Number : ";
    cin>>n;
    if(n<=0) cout<<"Invalid Input";
    else{
        for(int i=1;i<=n;i++){
            if(i%2 != 0) j = n;
            else j = n-1;
            for(int k=1;k<=j;k++){
                if(j==n) cout<<i<<" ";
                else cout<<" "<<i;
            }
            cout<<endl;
        }
    }
}