class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumi = 0;
        for(int i = 0;i<nums.size();i++){
            sumi += nums[i];
        }
        int left = 0;int right = sumi;
        for(int i = 0;i<nums.size();i++){
            right -= nums[i];
            if(left==right)
                return i;
            left += nums[i];
        }
        return -1;
    }
};