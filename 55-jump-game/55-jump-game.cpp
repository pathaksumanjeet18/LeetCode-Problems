class Solution {
public:
    bool canJump(vector<int>& nums) {
        int canReach = 0;
        for(int i = 0;i<nums.size();i++){
            if(i>canReach)
                return false;
            canReach = max(canReach,nums[i]+i);
            
        }
        return true;
    }
};