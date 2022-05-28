class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool row = false;
        bool col = false;
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    if(i==0 && j==0){
                        row = true;
                        col = true;
                        matrix[0][0] = 0;

                    }
                    else if (i==0){
                        row = true;
                        matrix[0][0] = 0;
                        
                    }
                    else if(j==0){
                        col = true;
                        matrix[0][0] = 0;


                    }
                    else{
                        matrix[0][j] = 0;
                        matrix[i][0] = 0;
                    }
                }
            }
        }
        for(int i = 1;i<matrix.size();i++){
            for(int j = 1;j<matrix[0].size();j++){
                if(matrix[i][0] == 0 or matrix[0][j] == 0){
                     
                        matrix[i][j] = 0;
                    
                }
                 
            }
        }
    
        for(int j = 0;j<matrix[0].size();j++){
            if(matrix[0][0] == 0 and row){
                     
                      matrix[0][j] = 0;
                    
            }
                 
        }
        for(int i = 0;i<matrix.size();i++){
            if(matrix[0][0]==0 and col){
                matrix[i][0] = 0;
            }
        }
        
    }
};