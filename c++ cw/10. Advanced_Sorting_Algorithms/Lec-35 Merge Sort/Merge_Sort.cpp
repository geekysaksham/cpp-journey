#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void merge(vector<int>& a, vector<int>& b, vector<int>& c){
    int i=0, j=0, k=0;
    while(i<a.size() && j<b.size()){
        if(a[i] < b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    while(i<a.size()) c[k++] = a[i++];
    while(j<b.size()) c[k++] = b[j++];
}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return; // 1 sized Array already sorted
    vector<int> v1(n/2);
    for(int i=0;i<n/2;i++) v1[i] = v[i]; // Fill v1
    vector<int> v2(n-n/2);
    for(int i=n/2;i<n;i++) v2[i-n/2] = v[i]; // Fill v2
    mergeSort(v1);
    mergeSort(v2);
    merge(v1,v2,v); 
}
int main(){
    vector<int> arr = {5,2,11,8,3,7,1,-4,6};
    print(arr);
    mergeSort(arr);
    print(arr);
}