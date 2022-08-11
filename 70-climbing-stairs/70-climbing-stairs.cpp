class Solution {
public:
    int climbStairs(int n) {
         int t[n+1];
        t[0] = 0;
         for(int i = 1;i<=n;i++){
             if(i<=2)
                 t[i] = i;
             else{
                 t[i] = t[i-1]+t[i-2];
             }
         }
        return t[n];
    }
};