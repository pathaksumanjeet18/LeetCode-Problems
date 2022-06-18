class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int numi = 0;int maxi = INT_MIN;int ans = 0;int leni = 0;
        for(int i = 0;i<nums.size();i++){
             ans += nums[i];
            maxi= max(ans,maxi);
            if(ans<0){
                 ans = 0;
            }
         }
        return maxi;
    }
};