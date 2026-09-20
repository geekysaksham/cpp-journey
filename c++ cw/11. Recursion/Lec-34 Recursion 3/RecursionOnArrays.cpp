#include<iostream>
#include<vector>
using namespace std;
void printRec(vector<int>& v, int idx){
    if(idx == v.size()) return;
    cout<<v[idx]<<" ";
    printRec(v,idx+1);
}
int main(){
    vector<int> v = {5,8,2,534,8,235,-8521};
    printRec(v,0);
}