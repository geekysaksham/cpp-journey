class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<n;i+=2){
            if(i == n-1) break;
            swap(arr[i],arr[i+1]);
        }
    }
};  