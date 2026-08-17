#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number Of Elements: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target,mindx;
    cout<<"Enter Target: ";
    cin>>target;
    //Dec Order Sorted Array is Given
    bool flag = false;
    int low = 0;
    int high = n-1;
    int mid = (low+high)/2;
    while(low<=high){
        mid = (low+high)/2;
        if(v[mid]==target){
            mindx = mid;
            flag = true;
            break;
        }
        else if(v[mid]<target) high = mid-1;
        else low = mid+1;
    }
    if(flag == true){
        cout<<"Target Found"<<endl<<"Index = "<<mindx;
    }
    else cout<<"Target Not Found!";
}