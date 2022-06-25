class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;int n = nums.size()-1;
        vector<int> numi;
        for(int i = 0;i<nums.size();i++){
            numi.push_back(nums[i]);
        }
        for(int i = n-1;i>=0;i--){
            if(nums[i]>nums[i+1]){
                count++;
                nums[i] = nums[i+1];
            }
        }
        int cnt = 0;
        for(int i = 1;i<nums.size();i++){
            if(numi[i]<numi[i-1]){
                cnt++;
                numi[i]=numi[i-1];
            }
        }
        count = min(count,cnt);
        if(count>1)
            return false;
        return true;
    }
};