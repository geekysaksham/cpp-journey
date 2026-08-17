class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        int n = arr.size();
        //Method 1
        // for(int i=0;i<k;i++){
        //     int min = INT_MAX;
        //     int mindx = -1;
        //     for(int j=i;j<n;j++){
        //         if(arr[j]<min){
        //             min = arr[j];
        //             mindx = j;
        //         }
        //     }
        //     swap(arr[mindx],arr[i]);
        // }
        
        //Method 2
        // int t = 0;
        // int swaps = 0;
        // for(int i=0;i<k;i++){
        //     for(int j=n-1;j>=t;j--){
        //         if(arr[j]<arr[j-1]){
        //             swap(arr[j],arr[j-1]);
        //             swaps++;
        //         }
        //     }
        //     if(swaps == 0) break;
        //     t++;
        // }
        
        //Method 3
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};