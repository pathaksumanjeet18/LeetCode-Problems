class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,pair<int,int>> mpp;
        mpp[nums[0]].first = 1;
        mpp[nums[0]].second = 0;
        for(int i = 1;i<nums.size();i++){
            if(mpp[nums[i]].first >=1){
                if(abs(mpp[nums[i]].second - i) <= k)
                    return true;
                else{
                    mpp[nums[i]].first = 2;
                    mpp[nums[i]].second = i;
                }
            }
            else{
                mpp[nums[i]].first = 1;
                mpp[nums[i]].second = i;
            }
        }
        return false;
    }
};