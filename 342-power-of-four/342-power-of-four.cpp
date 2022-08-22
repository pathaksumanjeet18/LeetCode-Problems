class Solution {
public:
    bool ans(int n){
        if(n<=0)
            return false;
        if(n/4 == 1 and n%4==0){
            return true;
        }
        if(n%4!=0){
            return false;
        }
        return ans(n/4);
    }
    bool isPowerOfFour(int n) {
        if(n==1)
            return true;
        return ans(n);
    }
};