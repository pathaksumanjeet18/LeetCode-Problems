class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char,int> mpp;
        for(int i = 0;i<s.length();i++){
            mpp[s[i]]++;
        }
        int even = 0;int odd = 0;int ans = 0;int cnt = 0;
        for(auto it = mpp.begin();it!=mpp.end();it++){
        
            if((it->second)%2 == 0){
                even += (it->second);
            }
            else{
                cnt = 1;
                odd += (it->second - 1);
            }
        }
        ans = (odd+even+cnt);
        return ans;
    }
};