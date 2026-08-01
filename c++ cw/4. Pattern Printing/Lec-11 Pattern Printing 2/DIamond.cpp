#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number n : ";
    cin>>n;

    //Method 1
    // //Upper Pyramid
    // int nsp = n-1;
    // int nst = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=nsp;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=nst;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //     nsp--;
    //     nst+=2;
    // }

    // //Lower Inverted Pyramid
    // nsp = 1;
    // nst = 2*n-3;
    // for(int i=1;i<=n-1;i++){
    //     for(int j=1;j<=nsp;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=nst;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //     nsp++;
    //     nst-=2;
    // }

    //Method 2
    int nsp = n-1, nst = 1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"* ";
        }
        cout<<endl;
        if(i<n){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
    }
}