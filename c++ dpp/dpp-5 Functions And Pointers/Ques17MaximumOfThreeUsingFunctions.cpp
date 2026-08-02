#include<iostream>
#include<algorithm>
using namespace std;
int findMaximum(int a, int b, int c){
    return max(a,max(b,c));
}
int main(){
    int a,b,c;
    cout<<"Enter Three Numbers : ";
    cin>>a>>b>>c;
    int maxOfThree = findMaximum(a,b,c);
    cout<<maxOfThree;
}