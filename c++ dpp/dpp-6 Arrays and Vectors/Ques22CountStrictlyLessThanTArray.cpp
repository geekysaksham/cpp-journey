#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, target, count = 0;
    cout<<"Enter Arrays Size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Target : ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i] < target) count++;
    }
    cout<<count;
}