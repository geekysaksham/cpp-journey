#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& v, int target, int low, int high){
    int mid = low + (high - low)/2;
    if(v[mid]==target) return mid;
    if(low>high) return -1;
    else if(v[mid]>target) binarySearch(v,target,low,mid-1);
    else if(v[mid]<target) binarySearch(v,target,mid+1,high);
}
int main(){
    vector<int> v = {3,4,7,11,19,24,43};
    int target;
    cout<<"Enter Target Element: ";
    cin>>target;
    cout<<binarySearch(v,target,0,v.size()-1);
}   