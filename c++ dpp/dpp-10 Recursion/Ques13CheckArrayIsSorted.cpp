#include<iostream>
using namespace std;
bool arraySorted(int arr[],int n, int i = 0){
    if(n==1 || n==0 || i==n-2) return true;
    if(arr[i]>=arr[i+1]) return false;
    return arraySorted(arr,n,i+1);
}
int main(){
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    if(n>0) cout<<"Enter Elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arraySorted(arr,n) == 1) cout<<"Is Array Sorted = true"<<endl;
    else cout<<"Is Array Sorted = false"<<endl;
}