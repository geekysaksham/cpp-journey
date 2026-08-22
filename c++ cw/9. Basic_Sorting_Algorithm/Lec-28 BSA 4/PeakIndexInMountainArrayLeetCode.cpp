class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int n = arr.size();
        // vector<int> ans = arr;
        // sort(ans.begin(),ans.end());
        // for(int i=0;i<n;i++){
        //     if(arr[i] == ans[n-1]) return i;
        // }
        // return 0;

        int n = arr.size();
        int low = 1;
        int high = n-2;
        int mid;
        while(low <= high){
            mid = low + (high-low)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]) low = mid + 1;
            else if(arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1]) high = mid - 1;
            else return mid;
        }
        return 0;
    }
};