#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter Arrays Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxEle = INT_MIN, secMaxEle = INT_MIN, thirdMaxEle = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxEle) maxEle = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>secMaxEle && arr[i] != maxEle) secMaxEle = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>thirdMaxEle && arr[i] != maxEle && arr[i] != secMaxEle) thirdMaxEle = arr[i];
    }
    if(thirdMaxEle == INT_MIN) cout<<"No Third Max Distinct Element exists."<<endl;
    else cout<<thirdMaxEle<<endl;
}