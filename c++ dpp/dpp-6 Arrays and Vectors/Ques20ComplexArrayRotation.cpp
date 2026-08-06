#include<iostream>
#include<vector>
using namespace std;
void revHelp(vector<int>& arr, int st, int lst){
    int i = st, j = lst;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int n, x, y;
    cout<<"Enter Arrays Size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter X and Y: ";
    cin>>x>>y;
    x %= n;
    y %= n;
    if(y>x){
        int k = y - x;
        revHelp(arr,0,n-1);
        revHelp(arr,0,n-k-1);
        revHelp(arr,n-k,n-1);
    }
    else{
        int k = x - y;
        revHelp(arr,0,n-1);
        revHelp(arr,0,k-1);
        revHelp(arr,k,n-1);
        
    }
    for(int ele : arr) cout<<ele<<" ";
}