class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        while(a>0 or b>0 or c>0){
            int a1 = a&1;
            int b1 = b&1;
            int c1 = c&1;
            if((a1|b1) != c1 and c1==1){
                ans++;
            }
            else if((a1|b1) != c1 and c1==0){
                if(a1==b1){
                    ans += 2;
                }
                else{
                    ans++;
                }
            }
            a = a>>1;
            b = b>>1;
            c = c>>1;
        }
        return ans;
    }
};