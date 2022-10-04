class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;
        while(start>0 or goal>0){
            int st = (start&1);
            int ed = (goal&1);
            if(st!=ed){
                ans++;
            }
            start = (start>>1);
            goal = (goal>>1);
        }
        return ans;
    }
};