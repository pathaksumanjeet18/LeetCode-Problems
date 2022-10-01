class Solution {
public:
    int t[200][20000];
    bool equalPartition(vector<int> nums,int n,int target){
        
        
        if(target==0)
            return true;
        
        if(n<=0){
            return false;
        }
        if(t[n-1][target]!=-1){
            return t[n-1][target];
        } 
        
        if(nums[n-1]>target){
            return t[n-1][target] = equalPartition(nums,n-1,target);
        }
        return t[n-1][target] = equalPartition(nums,n-1,target-nums[n-1])||equalPartition(nums,n-1,target);
        
    }
    bool canPartition(vector<int>& nums) {
        int x = accumulate(nums.begin(),nums.end(),0);
        memset(t,-1,sizeof(t));
        if(x%2!=0){
            return false;
        }
        else{
            return equalPartition(nums,nums.size(),x/2);
        }
    }
};