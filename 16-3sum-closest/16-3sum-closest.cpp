class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 0;int minDiff = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-2;i++){
            int l = i + 1;int r = nums.size()-1;
            while(l<r){
                int c = nums[i] + nums[l] + nums[r];
                if(c==target){
                    return c;
                }
                if(c>target){
                    if(abs(target-c)<=minDiff){
                        ans = c;
                        minDiff = min(abs(target-c),minDiff);
                    }
                    r--;
                }
                else{
                     if(abs(target-c)<=minDiff){
                        ans = c;
                        minDiff = min(abs(target-c),minDiff);
                    }
                    l++;
                }
            }
        }
        return ans;
    }
};