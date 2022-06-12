class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int> mp;
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        int i = 0;
        mp[nums[i]]++;
        int j = 1;
        int sum = nums[i];int maxi = nums[i];
        while(j<nums.size()){
            mp[nums[j]]++;
            sum += nums[j];
            if(mp.size() == (j-i+1)){
                maxi = max(maxi,sum);
                j++;
            }
            else if(mp.size() < (j-i+1)){
                while(mp.size() < (j-i+1)){
                    mp[nums[i]]--;
                    sum -= nums[i];
                    if(mp[nums[i]] ==0){
                        mp.erase(nums[i]);
                    }
                    i++;
                }
                maxi = max(maxi,sum);
                j++;
            }
            
        }
        return maxi;
    }
};