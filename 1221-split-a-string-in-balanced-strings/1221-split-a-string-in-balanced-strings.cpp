class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0;
        int r = 0;int ans = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == 'L')
                l++;
            else
                r++;
            if(l==r)
                ans++;
        }
        return ans;
    }
};