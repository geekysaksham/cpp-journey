class Solution {
public:
    bool isHappy(int n) {
        if(n==7) return true;
        if(n<10 && n==1) return true;
        else if(n<10 && n>1) return false;
        else{
            while(n>9){
                int sum = 0;
                while(n>0){
                    sum += (n%10) * (n%10);
                    n/=10;
                }
                n = sum;
            }
            if(n==1 || n==7) return true;
            else return false;
        }
        return false;
    }
};