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
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(i != (n-1)) ans.push_back(abs(arr[i]-arr[i+1]));
        else ans.push_back(abs(arr[n-1]-arr[0]));
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}