#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number n : ";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     int a = 1;
    //     for(int j=1;j<=i;j++){
    //         cout<<a<<" ";
    //         a+=2;
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
}