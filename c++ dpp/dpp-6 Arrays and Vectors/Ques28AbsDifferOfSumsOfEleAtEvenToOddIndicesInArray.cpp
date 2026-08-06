#include<iostream>
#include<vector>
#include<cmath>
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
    int sumOfEvenIdx = 0, sumOfOddIdx = 0;
    for(int i=0;i<n;i++){
        if(i%2 == 0) sumOfEvenIdx += arr[i];
        else sumOfOddIdx += arr[i];
    }
    cout<<abs(sumOfEvenIdx-sumOfOddIdx);
}