class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 0;i<numRows;i++){
            vector<int> ansi;
            for(int j = 0;j<=i;j++){
                if(j==0){
                    ansi.push_back(1);
                }
                else if(j==i){
                    ansi.push_back(1);
                }
                else{
                    ansi.push_back(ans[i-1][j] + ans[i-1][j-1]);
                }
            }
            ans.push_back(ansi);
        }
        return ans;
    }
};