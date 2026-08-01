#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Array Size: ";
    cin>>num;
    int arr[num];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int prod = 1;
    for(int i=0;i<num;i++){
        prod *= arr[i];
    }
    cout<<"Product Of Elements = "<<prod;
}