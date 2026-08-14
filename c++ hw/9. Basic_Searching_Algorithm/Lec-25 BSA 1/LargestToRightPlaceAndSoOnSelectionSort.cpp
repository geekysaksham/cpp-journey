#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<n-1;i++){
        int max = v[0];
        int maxIdx = 0;
        for(int j=0;j<n-i;j++){
            if(v[j]>max){
                max=v[j];
                maxIdx = j;
            }
        }
        swap(v[n-1-i],v[maxIdx]);
    }
    print(v);
}