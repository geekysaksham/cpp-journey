class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        // Method 4
        int sum = 0;
        for(int i=1;i<=n;i++) sum += i; 
        int arrSum = 0;
        for(int i=0;i<n;i++){
            arrSum += nums[i];
        }
        return sum - arrSum;

        //Method 3
        // vector<bool> temp(n+1,false);
        // for(int i=0;i<n;i++){
        //     temp[nums[i]] = true;
        // }
        // for(int i=0;i<n+1;i++){
        //     if(temp[i] == false) return i;
        // }
        // return 0;

        // Method 2
        // bool flag = false;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++){
        //     if(nums[i] != i){
        //         return i;
        //     }
        // }
        // return n;

        // Method 1
        // for(int i=0;i<n;i++){
        //     bool flag = false;
        //     for(int j=0;j<n;j++){
        //         if(nums[j] == i){
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if(flag == false) return i;
        // }
        // return n;
    }
};