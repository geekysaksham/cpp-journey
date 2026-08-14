#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    bool flag = true;
    vector<int> v;
    cout<<"Enter Array Elements: ";
    int swaps;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<n-1;i++){
        swaps = 0;
        for(int j=n-1;j>i;j--){
            if(v[j]<v[j-1]){
                swap(v[j],v[j-1]);
                swaps++;
            }
        }
        if(swaps == 0) break;
    }
    print(v);
}