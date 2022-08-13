class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        int t[500];int s[500];
        memset(t,-1,sizeof(t));
        memset(s,-1,sizeof(s));
        
        if(n==0)
            return nums[0];
        
         
        return max(solve(nums,1,n,t),solve(nums,0,n-1,s));
            
    }
    int solve(vector<int> nums,int i,int n,int t[]){
        if(i>n){
            return 0;
        }
        if(t[i]!=-1)
            return t[i];
        return t[i] = max((nums[i]+solve(nums,i+2,n,t)),solve(nums,i+1,n,t));
    }
};