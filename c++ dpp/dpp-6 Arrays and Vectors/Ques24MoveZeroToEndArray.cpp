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

    //Method 2
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0) arr[j++] = arr[i];
    }
    for(int i=j;i<n;i++){
        arr[i] = 0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //Method 1
    // vector<int> ans;
    // int noz = 0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0) noz++;
    //     else ans.push_back(arr[i]);
    // }
    // for(int i=0;i<noz;i++){
    //     ans.push_back(0);
    // }
    // for(int i=0;i<n;i++){
    //     arr[i] = ans[i];
    //     cout<<arr[i]<<" ";
    // }
}