class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int sti = 0;int stj = 0;int edi = matrix.size()-1;int edj = matrix[0].size()-1;
        while(stj<=edj and sti<=edi){
            for(int j = stj;j<=edj;j++){
                ans.push_back(matrix[sti][j]);
            }
            sti++;
            for(int i = sti;i<=edi;i++){
                ans.push_back(matrix[i][edj]);
            }
            edj--;
            if(sti<=edi){
                for(int j = edj;j>=stj;j--){
                    ans.push_back(matrix[edi][j]);
                }
            }
            edi--;
            if(stj<=edj){
                for(int i = edi;i>=sti;i--){
                    ans.push_back(matrix[i][stj]);
                }
            }
            stj++;
        }
        return ans;
    }
};