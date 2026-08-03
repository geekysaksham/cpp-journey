#include<iostream>
using namespace std;
// Method 1
void rev(int arr[], int n){
    int st = 0, end = n-1;
    for(int i=0,j=n-1 ;i<n/2; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
//Method 2
void rev2(int arr[], int n){
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;
    rev(arr,n);
    for(int ele : arr) cout<<ele<<" ";
}