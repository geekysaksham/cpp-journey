#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Arrays Size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int noOfEven = 0, noOfOdd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0) noOfEven++;
        else noOfOdd++;
    }
    cout<<"Even: "<<noOfEven<<", Odd: "<<noOfOdd;
}