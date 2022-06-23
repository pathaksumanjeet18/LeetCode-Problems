class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> mpp;
        vector<int> ansi;
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums[i].size();j++){
                mpp[nums[i][j]]++;
            }
        }
        for(auto it = mpp.begin();it!=mpp.end();it++){
            if(it->second == nums.size()){
                ansi.push_back(it->first);
            }
        }
        return ansi;
    }
};