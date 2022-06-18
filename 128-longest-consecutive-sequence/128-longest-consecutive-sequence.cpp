class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
            return 0;
        int sum = 0;int maxi = 1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i]-nums[i-1] == 1){
                sum++;
            }
            else{
                if(nums[i]-nums[i-1]!=0)
                    sum = 0;
            }
            maxi = max(sum+1,maxi);
        }
        
        return maxi;
    }
};