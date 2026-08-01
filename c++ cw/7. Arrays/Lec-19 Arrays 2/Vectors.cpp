#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(8,-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5); // adds a element at end
    arr.push_back(14);
    arr.pop_back(); // removes a element from end
    arr.push_back(7);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}