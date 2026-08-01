#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<min(i,j)<<" ";
        }
        cout<<endl;
    }
}