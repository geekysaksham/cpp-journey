#include<iostream>
using namespace std;
int main(){
    int* brr = new int[7]; // dynamic allocation
    for(int i=0;i<7;i++){ // by default 0
        brr[i] = i;
    }
    int* ptr = &brr[0];
    cout<<*brr<<endl;
    brr++;
    cout<<*brr<<endl;
    brr++;
    cout<<*brr<<endl;
    brr = ptr;
    cout<<*brr<<endl;
}