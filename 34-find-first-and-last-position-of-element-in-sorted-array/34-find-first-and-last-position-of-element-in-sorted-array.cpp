class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0;int j = nums.size()-1;
        int ansX = -1;int ansY = -1;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]==target){
                ansX = mid;
                j = mid - 1;
            }
            else if(nums[mid]>target){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        i = 0;j = nums.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]==target){
                ansY = mid;
                i = mid + 1;
            }
            else if(nums[mid]>target){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        vector<int> ans;
        ans.push_back(ansX);
        ans.push_back(ansY);
        return ans;
        
    }
};