#include<iostream>
#include<vector>
using namespace std;
// void change(vector<int> v){ // pass by value
//     v[2] = 99;
// }
void change(vector<int>& v){ // pass by reference
    v[2] = 99;
}
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9,7};
    change(v);
    cout<<v[2]<<endl;
}