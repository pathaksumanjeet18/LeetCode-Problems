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
        x = c;vector<int> mem;
        for(int i = 0;i<answer.size();i++){
            if(i==c){
                c = (c+x);
                ansi.push_back(mem);
                mem.clear();
            }
            mem.push_back(answer[i]);
        }
        ansi.push_back(mem);
        return ansi;
    }
};