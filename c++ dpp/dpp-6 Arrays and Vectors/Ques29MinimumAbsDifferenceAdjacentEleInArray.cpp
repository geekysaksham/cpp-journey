#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
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
    int minAbsDiff = INT_MAX;
    for(int i=0;i<n-1;i++){
        int adjAbsDiff = abs(arr[i] - arr[i+1]);
        if(adjAbsDiff < minAbsDiff) minAbsDiff = adjAbsDiff;
    }
    cout<<minAbsDiff<<endl;
}