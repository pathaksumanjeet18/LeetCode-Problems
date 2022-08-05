class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        if(nums.size()==2){
            if(nums[0]>nums[1])
                return 0;
            else
                return 1;
        }
        int i = 0;int j = nums.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            
            if(mid==0 and nums[mid]>nums[mid+1])
                return mid;
            else if(mid==nums.size()-1 and nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]>nums[mid+1] and nums[mid]<nums[mid-1])
                j = mid;
            else if(nums[mid]<nums[mid+1] and nums[mid]>nums[mid-1])
                i = mid+1;
            else
                i = mid+1;
        }
        return i;
    }
};