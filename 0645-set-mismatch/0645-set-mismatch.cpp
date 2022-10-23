class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 1;i<=nums.size();i++){
            mpp[i]++;
        }
        int c = 0;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]--;
            if(mpp[nums[i]]<0){
                c = nums[i];
            }
        }
        for(auto it : mpp){
            if(it.second == 1){
                return {c,it.first};
            }
        }
        return {};
    }
};