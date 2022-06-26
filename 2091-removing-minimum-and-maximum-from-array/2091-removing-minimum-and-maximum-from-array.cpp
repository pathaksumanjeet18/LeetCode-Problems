class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()<=2){
            return nums.size();
        }
        int smEleIN = 0;
        int bgEleIN = 0;int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]>= nums[smEleIN])
                smEleIN = i;
            if(nums[i]<= nums[bgEleIN]){
                bgEleIN = i;
            }
        }
        int front = max((smEleIN+1),(bgEleIN+1));
        int back = max((n-smEleIN),(n-bgEleIN));
        int numa = min((smEleIN+1),(bgEleIN+1));
        int numi = min((n-smEleIN),(n-bgEleIN));
        int x = min(front,min(back,(numa+numi)));
        return x;
    }
};