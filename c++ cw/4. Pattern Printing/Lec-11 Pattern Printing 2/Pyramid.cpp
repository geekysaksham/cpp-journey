#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number n : ";
    cin>>n;

    // Method 1
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int k=1;k<=(2*i-1);k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Method 2 (nsp,nst)
    int nsp = n-1;
    int nst = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"* ";
        }
        cout<<endl;
        nsp--;
        nst += 2;
    }
}