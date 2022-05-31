class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int sti = 0;int stj = 0;
        int edi = matrix.size()-1;int edj = matrix.size()-1;
        while(stj != edj){
            while(sti != edi){
                swap(matrix[sti][stj],matrix[edi][edj]);
                sti++;
                edj--;
            }
            sti = 0;
            edj = matrix.size()-1;
            stj++;
            edi--;
        }
        sti = 0;stj = 0;
        edi = matrix.size()-1;edj = 0;
        while(stj<(matrix.size())){
            while(sti<=edi){
                swap(matrix[sti][stj],matrix[edi][edj]);
                edi--;
                sti++;
            }
            stj++;
            edj++;
            edi = matrix.size()-1;
            sti = 0;
        }
    }
};