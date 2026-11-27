#include<iostream>
#include<algorithm>
using namespace std;
int linearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++)
        if(arr[i]==target) return i+1;
    return -1;
}
int binarySearch(int arr[],int n,int target){
    int copy[n];
    for(int i=0;i<n;i++) copy[i]=arr[i];
    sort(copy,copy+n);
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(copy[mid]==target){
            for(int i=0;i<n;i++)
                if(arr[i]==target) return i+1;
            return -1;
        }
        if(copy[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    if(n<=0) return cout<<"Invalid Array Size!",0;
    int arr[n],target,ch;
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter Target: ";
    cin>>target;
    cout<<"\n1. Linear Search   2. Binary Search\nEnter Choice: ";
    cin>>ch;
    if(ch==1) cout<<"Target Position = "<<linearSearch(arr,n,target);
    else if(ch==2) cout<<"Target Position = "<<binarySearch(arr,n,target);
    else cout<<"Invalid Choice";
    return 0;
}