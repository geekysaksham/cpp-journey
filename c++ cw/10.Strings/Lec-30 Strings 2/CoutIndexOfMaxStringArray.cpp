#include<iostream>
#include<climits>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> arr = {"0123","10023","456049051","00182","940","2901"};
    int max = INT_MIN;
    int maxidx = -1;
    for(int i=0;i<arr.size();i++){
        if(stoll(arr[i]) > max){
            max = stoll(arr[i]);
            maxidx = i;
        }
    }
    cout<<"Max Element = "<<max<<endl<<"At Index = "<<maxidx;
}