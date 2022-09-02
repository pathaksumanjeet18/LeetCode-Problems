class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs.size()==1){
            return strs[0];
        }
        for(int j = 0;j<200;j++){
        
            for(int i = 0;i<strs.size()-1;i++){
                if(strs[i].size()<j+1){
                    return ans;
                }
                if(strs[i][j]!=strs[i+1][j]){
                    return ans;
                }

            }
            ans += strs[0][j];
        }
        return ans;
    }
};