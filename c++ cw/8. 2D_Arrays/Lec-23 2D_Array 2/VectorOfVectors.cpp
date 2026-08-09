#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {3,7,2,8,9};
    vector<int> v2 = {9,2,9};
    vector<int> v3 = {4,4,4,4};
    vector<int> v4 = {10};
    vector<vector<int>> v = {v1,v2,v3,v4}; // Jagged Array
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // v.push_back(v4);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}