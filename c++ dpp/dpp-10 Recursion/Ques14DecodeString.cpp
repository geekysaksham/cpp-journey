//My Code

// #include<iostream>
// #include<string>
// using namespace std;
// string appendString(string str, int st){
//     string appstr = "";
//     int i = st;
//     while(str[i] != ']'){
//         appstr += str[i];
//         i++;
//     }
//     return appstr;
// }
// string updatedString(string str,string appStr, int idx, int appStrLen){
//     string newStr = "";
//     int i = 1;
//     while(i<=(str[idx-1] - '0')){
//         newStr += str[i];
//         i++;
//     }
//     newStr += appStr;
//     i = idx + appStrLen+2;
//     while(i<str.length()){
//         newStr += str[i];
//         i++;
//     }
//     return newStr;
// }
// string decodeString(string str, int len,int idx){
//     if(idx == 0 || len == 0 || idx == -1) return str;
//     if(str[idx] == '['){
//         string newStr = "";
//         string appStr = appendString(str, idx+1);
//         newStr = updatedString(str,appStr,idx,appStr.length());
//         int length = newStr.length();
//         return decodeString(newStr,length,length-1);
//     }
//     else{
//         return decodeString(str, len, idx-1);
//     }
// }
// int main(){
//     string str;
//     cout<<"Enter Valid Encoded String : ";
//     getline(cin,str);
//     int len = str.length();
//     cout<<decodeString(str, len, len-1);
// }

//AI Code

#include <iostream>
#include <string>
using namespace std;

string decodeString(string& s, int& idx) {
    string result = "";

    while (idx < s.length() && s[idx] != ']') {
        if (s[idx] >= 'a' && s[idx] <= 'z') {
            result += s[idx];
            idx++;
        }
        else if (s[idx] >= '0' && s[idx] <= '9') {
            int count = 0;

            while (idx < s.length() &&
                   s[idx] >= '0' && s[idx] <= '9') {
                count = count * 10 + (s[idx] - '0');
                idx++;
            }

            idx++; // Skip '['

            string decoded = decodeString(s, idx);

            idx++; // Skip ']'

            while (count--) {
                result += decoded;
            }
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter Valid Encoded String: ";
    getline(cin, str);

    int idx = 0;
    cout << decodeString(str, idx);

    return 0;
}