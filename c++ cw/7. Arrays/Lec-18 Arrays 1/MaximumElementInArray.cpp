#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    //int max = arr[0];
    for(int i=0;i<num;i++){
        if(arr[i] > max) max = arr[i];
    }
    cout<<"Maximum Element = "<<max;
}