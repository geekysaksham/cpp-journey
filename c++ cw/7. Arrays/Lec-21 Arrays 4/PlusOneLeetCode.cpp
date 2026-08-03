class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        //Method 2
        vector<int> ans;
        int carry = 1;
        for(int i=n-1;i>=0;i--){
            int sum = digits[i] + carry;
            if(sum<10){
                carry = 0;
                ans.push_back(sum);
            }
            else{
                carry = 1;
                ans.push_back(0);
            }
        }
            if(carry == 1) ans.push_back(1);
            reverse(ans.begin(),ans.end());
            return ans;

        //Method 1
        // if(digits[n-1] != 9) digits[n-1] += 1;
        // else{
        //     int a = n - 1;
        //     while(a>=0){
        //         if(a>0){
        //             if(digits[a]==9) digits[a] = 0;
        //             else{
        //                 digits[a] += 1;
        //                 break;
        //             }
        //         }
        //         else if(a==0){
        //             if(digits[a] != 9) digits[a] += 1;
        //             else{
        //                 digits[0] = 1;
        //                 digits.push_back(0);
        //             }
        //         }
        //         a--;
        //     }
        // }
        // return digits;
    }
};