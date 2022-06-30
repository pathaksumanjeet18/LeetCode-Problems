class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int x = nums[n/2];
        for(int i = 0;i<nums.size();i++){
            nums[i] = abs(nums[i]-x);
        }
        return accumulate(nums.begin(),nums.end(),0);
    }
};