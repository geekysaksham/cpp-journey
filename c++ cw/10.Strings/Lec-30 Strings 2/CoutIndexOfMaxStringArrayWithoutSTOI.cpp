#include<iostream>
#include<climits>
#include<vector>
#include<string>
using namespace std;
string maxNumBetweenTwo(string s1, string s2){
    int count1 = 0, count2 = 0;
    int i = 0, j = 0;
    while(true){
        if(s1[i] != 0) break;
        else{
            count1++;
            i++;
        }
    }
    while(true){
        if(s2[j] != 0) break;
        else{
            count2++;
            j++;
        }
    }
    if((s1.length()-count1) > (s2.length()-count2)) return s1;
    else if((s2.length()-count2) > (s1.length()-count1)) return s2;
    else{
        while(i<s1.length()){
            if(s1[i]>s2[j]) return s1;
            else if(s2[j]>s1[i]) return s2;
            else{
                i++;
                j++;
            }
        }
    }
    return s1;
}
int main(){
    vector<string> arr = {"0123","10023","45604905145","00182","940","2901"};
    string max = arr[0];
    int idx = 0;
    for(int i=1;i<arr.size();i++){
        if(max != maxNumBetweenTwo(max,arr[i])){
            max = arr[i];
            idx = i;
        }
    }
    cout<<"Max Element String = "<<max<<endl<<"Its Index = "<<idx;
}