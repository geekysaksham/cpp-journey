#include<iostream>
using namespace std;
int main(){
    int arr[] = {-42,-35,-5,-1,-88,-34};
    int n = sizeof(arr)/4;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
}