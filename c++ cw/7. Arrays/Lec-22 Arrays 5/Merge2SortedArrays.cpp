#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter Arrays Size of 1 and 2: ";
    cin>>n1>>n2;
    vector<int> arr(n1);
    vector<int> brr(n2);
    cout<<"Enter Elements of Array 1: ";
    for(int i=0;i<n1;i++) cin>>arr[i];
    cout<<"Enter Elements of Array 2: ";
    for(int i=0;i<n2;i++) cin>>brr[i];
    int i = 0, j = 0, k = 0;
    vector<int> ans(n1+n2);
    while(k < (n1+n2)){
        if(arr[i] <= brr[j] && i < n1) ans[k++] = arr[i++];
        else if(brr[j] <= arr[i] && j < n2) ans[k++] = brr[j++];
    }
    for(int l=0;l<(n1+n2);l++){
        cout<<ans[l]<<" ";
    }
}