class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n = arr.size();
        
        //Method 1 (Two Pass)
        // int noOfZeroes=0;
        // for(int i=0;i<n;i++){
        //     if(arr[i]==0) noOfZeroes++;
        // }
        // for(int i=0;i<noOfZeroes;i++){
        //     arr[i] = 0;
        // }
        // for(int i=noOfZeroes;i<n;i++){
        //     arr[i] = 1;
        // }
        
        //Method 2 (One Pass)
        int i = 0, j = n-1;
        while(i<j){
            if(arr[i]==1 && arr[j]==0) swap(arr[i],arr[j]);
            else if(arr[i]==0) i++;
            else if(arr[j]==1) j--;
        }
    }
};