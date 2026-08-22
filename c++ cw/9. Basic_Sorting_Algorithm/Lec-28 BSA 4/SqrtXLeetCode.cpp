class Solution {
public:
    int mySqrt(int x) {
        // Method 1
        int low=1;
        int high = x;
        int mid;
        int sqrt = 0;
        if(x==0) return 0;
        while(low<=high){
            mid = low + (high-low)/2;
            if(mid<=x/mid){
                sqrt = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        return sqrt;

        // Method 2
        // for(int i=1;i<=x;i++){
        //     if(i == x/i) return i;
        //     else if(i > x/i) return i-1;
        // }
        // return 0;
    }
};