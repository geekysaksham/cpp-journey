#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Array Size: ";
    cin>>num;
    int arr[num];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<num;i++){
        sum += arr[i];
    }
    cout<<"Sum Of Elements = "<<sum;
}