#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number n : ";
    cin>>n;

    //Method 1
    // int stars = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=stars;j++){
    //         cout<<"* ";
    //     }
    //     stars += 2;
    //     cout<<endl;
    // }

    //Method 2
    for(int i=1;i<=n;i++){
        for(int k=1;k<=(2*i-1);k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    
}