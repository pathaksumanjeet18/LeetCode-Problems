class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int n = matrix[0].size();
        int j = n-1;
        while(i<matrix.size() and j>=0){
            if(target==matrix[i][j])
                return true;
            else if(target>matrix[i][j]){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};