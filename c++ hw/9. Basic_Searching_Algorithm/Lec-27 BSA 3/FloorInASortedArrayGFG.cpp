class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int n=arr.size();
        int low=0, high=n-1;
        int mid = -1, revLb;
        if(x<arr[0]) return -1;
        while(low<=high){
            mid = (low+high)/2;
            if(arr[mid]>x) high = mid-1;
            else{
                revLb = mid;
                low = mid+1;
            }
        }
        return revLb;
    }
};