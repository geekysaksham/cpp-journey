#include<iostream>
using namespace std;
int main(){
    int int1,int2;
    cout<<"Enter Lower Integer : ";
    cin>>int1;
    cout<<"Enter Higher Integer : ";
    cin>>int2;
    for(int i=int1+1;i<int2;i++){
        if(i%2 == 0) cout<<i<<" ";
    }
}