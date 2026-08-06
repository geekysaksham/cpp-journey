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
    int i=0, j=n-1;
    bool flag = true;
    while(i<j){
        if(arr[i++] != arr[j--]){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"Palindrome";
    else cout<<"Not Palindrome";
}