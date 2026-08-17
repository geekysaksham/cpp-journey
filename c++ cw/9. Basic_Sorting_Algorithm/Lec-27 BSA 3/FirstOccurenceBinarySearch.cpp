#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, idx;
    cout<<"Enter Number Of Elements: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flag = false;
    int target, mid, low = 0, high = n-1;
    cout<<"Enter Target: ";
    cin>>target;
    while(low<=high){
        mid = (low+high)/2;
        if(v[mid]<target) low = mid+1;
        else if(v[mid]>target) high = mid-1;
        else{
            idx = mid;
            flag = true;
            break;
        }
    }
    if(flag == false) cout<<"Element Not Found!";
    else{
        int i=idx-1;
        while(v[i]==v[idx]){
            idx = i;
            i--;
        }
        cout<<"Element Found!"<<endl<<"First Occurence at Index = "<<idx;
    }
}