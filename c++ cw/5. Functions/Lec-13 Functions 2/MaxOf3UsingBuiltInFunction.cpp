#include<iostream>
#include<algorithm>
using namespace std;
int maxOfThree(int a, int b, int c){
    return max(a,max(b,c));
}
int main(){
    cout<<maxOfThree(4,75,12);
}