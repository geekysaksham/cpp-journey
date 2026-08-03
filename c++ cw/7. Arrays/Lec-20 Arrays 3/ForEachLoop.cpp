#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9};
    // Multiply Even No. by 2, Sqaure the Odd No.
    for(int i=0;i<v.size();i++){
        if(v[i]%2 == 0) v[i] *= 2;
        else v[i] *= v[i];
    }

    //It didn't changed the elements of Vector.
    // for(int ele : v){
    //     if(ele%2 == 0) ele *= 2;
    //     else ele *= ele;
    // }

    for(int ele : v){
        cout<<ele<<" ";
    }
}