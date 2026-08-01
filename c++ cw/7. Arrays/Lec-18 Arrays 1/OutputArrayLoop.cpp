#include<iostream>
using namespace std;
int main(){
    int arr[10] = {}; // Default 0
    // int arr[] = {74,96,9,57,62,35,7,12,56,89,2,34};
    int count = sizeof(arr)/4;
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
}