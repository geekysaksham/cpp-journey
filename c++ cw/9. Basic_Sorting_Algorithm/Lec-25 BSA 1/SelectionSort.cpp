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
        int min = v[i];
        int mindx = i;
        for(int j=i+1;j<n;j++){
            if(v[j]<min){
                min=v[j];
                mindx = j;
            }
        }
        swap(v[i],v[mindx]);
    }
    print(v);
}