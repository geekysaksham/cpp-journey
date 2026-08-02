#include<iostream>
#include<cmath>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        if(i%3==0) continue;
        cout<<i<<" ";
    }
}