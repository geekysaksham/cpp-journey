#include<iostream>
#include<vector>
using namespace std;
bool nonIncOrder(vector<int>& v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        if(v[i+1] > v[i]) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter Arrays Size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = nonIncOrder(arr);
    if(flag) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}