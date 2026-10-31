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
int main(){
    vector<int> a = {2,3,6,8};
    int m = a.size();
    vector<int> b  {1,4,5,7,9,10};
    int n = b.size();
    vector<int> c(m+n);
    merge(a,b,c);
    print(a);
    print(b);
    print(c);
}