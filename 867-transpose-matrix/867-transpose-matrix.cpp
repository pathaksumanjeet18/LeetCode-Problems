class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        int j = 0;
        while(j<matrix[0].size()){
            vector<int> ansi;
            for(int i = 0;i<matrix.size();i++){
                ansi.push_back(matrix[i][j]);
            }
            ans.push_back(ansi);
            j++;
        }
        return ans;
    }
};