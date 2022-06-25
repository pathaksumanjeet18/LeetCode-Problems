class Solution {
public:
    
    int climbStairs(int n) {
        long long int dp[100];
        for(int i = 0;i<100;i++)
            dp[i] = -1;

        return ans(n,dp);

    }
    long long int ans(int n,long long int dp[]){
         if(n==0 ){
            dp[n] = 1;
            return 1;
         }
         if(n<0)
            return 0;
         if(dp[n]!=-1)
             return dp[n];
        else{
            long long int x = ans(n-1,dp) + ans(n-2,dp);
            dp[n] = x;
        }
        return dp[n];
    }
    
};