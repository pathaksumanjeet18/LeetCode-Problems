class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0;int j = nums.size()-1;
        if(nums[j]>=nums[i])
            return nums[i];
        else{
            while(nums[j]<nums[i]){
                j--;
            }
            return nums[j+1];
        }
        return nums[j+1];
    }
};