class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = s.length()-1;int j = t.length()-1;
        if(j<i){
            return false;
        }
        while(i>=0){
            if(s[i]==t[j]){
                j--;i--;
            }
            else{
                j--;
            }
            if(j<0 and i>=0)
                return false;
        }
        return true;
    }
};