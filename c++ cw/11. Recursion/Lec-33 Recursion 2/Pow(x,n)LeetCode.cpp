class Solution {
public:
    double calcPow(double x, long long n){
        if(n==0) return 1;
        double ans = calcPow(x,n/2);
        if(n%2==0) return ans * ans;
        else return ans * ans * x;
    }
    double myPow(double x, long long n) {
        bool flag = (n<0) ? false : true;
        double ans = calcPow(x,abs(n));
        return flag ? ans : 1/ans;
    }
};