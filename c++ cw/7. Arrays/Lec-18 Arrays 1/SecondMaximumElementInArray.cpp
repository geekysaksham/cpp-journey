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
    int firstMax = INT_MIN, secMax = INT_MIN;
    for(int i=0;i<num;i++){
        if(arr[i] > firstMax) firstMax = arr[i];
    }
    for(int i=0;i<num;i++){
        if(arr[i] > secMax && arr[i] != firstMax) secMax = arr[i];
    }
    cout<<"Seconnd Maximum Element = "<<secMax;
}