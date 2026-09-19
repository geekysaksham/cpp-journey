#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str1 = "Saksham";
    str1.pop_back();
    str1.push_back('j');
    cout<<str1<<endl;

    sort(str1.begin(),str1.end());
    cout<<str1;
}