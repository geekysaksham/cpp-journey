#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter Array Size: ";
    cin>>size;
    bool flag = false;
    int arr[size];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter Target: ";
    cin>>target;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            flag = true;
            break;
        }
    }
    if(flag == true) cout<<target<<" is Present in Array";
    else cout<<target<<" is Not Present in Array";
}