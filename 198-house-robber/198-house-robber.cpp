class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        int t[500];
        memset(t,-1,sizeof(t));
        
        return solve(nums,n,t);
    }
    int solve(vector<int> nums,int n,int t[]){
        if(n<0){
            return 0;
        }
        if(t[n]!=-1)
            return t[n];
        return t[n] = max((nums[n]+solve(nums,n-2,t)),solve(nums,n-1,t));
    }
};