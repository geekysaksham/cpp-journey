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
    bool flag = false;
    int num;
    vector<int> v(100001,0);
    for(int i=0;i<n;i++){
        v[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(v[arr[i]] >= 2){
            flag=true;
            num=arr[i];
            break;
        }
    }
    if(flag == true) cout<<num;
    else cout<<-1;  
}