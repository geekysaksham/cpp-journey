#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    //Input
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Print Negative Elements Of Array
    for(int i=0;i<n;i++){
        if(arr[i] < 0) cout<<arr[i]<<" ";
    }
}