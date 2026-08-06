#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Arrays Size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Array Elements (0,1): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxConsecOnes = 0;
    int noOfConsecOnes = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1) noOfConsecOnes++;
        else if(arr[i] == 0){
            if(noOfConsecOnes > maxConsecOnes) maxConsecOnes = noOfConsecOnes;
            noOfConsecOnes = 0;
        }
    }
    if(noOfConsecOnes > maxConsecOnes) maxConsecOnes = noOfConsecOnes;
    cout<<maxConsecOnes<<endl;
}