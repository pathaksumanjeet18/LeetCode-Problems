class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int ans = 0;int ansi = 0;
        for(auto it : mpp){
            ans += (it.second / 2);
            ansi += (it.second%2);
        }
        return {ans,ansi};
    }
};