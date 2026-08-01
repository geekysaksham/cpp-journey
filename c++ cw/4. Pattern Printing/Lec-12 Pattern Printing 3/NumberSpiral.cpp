#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    //Method 1
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=num;j++){
    //         cout<<min(i,j)<<" ";
    //     }
    //     for(int j=num-1;j>=1;j--){
    //         cout<<min(i,j)<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=num-1;i>=1;i--){
    //     for(int j=1;j<=num;j++){
    //         cout<<min(i,j)<<" ";
    //     }
    //     for(int j=num-1;j>=1;j--){
    //         cout<<min(i,j)<<" ";
    //     }
    //     cout<<endl;
    // }

    //Method 2
    for(int i=1;i<=2*num-1;i++){
        for(int j=1;j<=2*num-1;j++){
            int a=i, b=j;   
            if(i>num) a = 2*num-i;
            if(j>num) b = 2*num-j;
            cout<<min(a,b)<<" ";
        }
        cout<<endl;
    }
}