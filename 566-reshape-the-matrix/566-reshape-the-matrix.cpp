class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int x = mat.size();
        int y = mat[0].size();
        if(x*y != r*c)
            return mat;
        vector<vector<int>> ansi;
        vector<int> answer;
        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[i].size();j++){
                answer.push_back(mat[i][j]);
            }
        }
        int j = 0;x = c;
        for(int i = 0;i<r;i++){
            vector<int> mem;
            for( ;j<c;j++){
                mem.push_back(answer[j]);
            }
            ansi.push_back(mem);
            c = (c+x);
        }
        return ansi;
    }
};