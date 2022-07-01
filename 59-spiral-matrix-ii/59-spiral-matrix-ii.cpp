class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans;
        if(n<=0){
            return ans;
        }
        for(int i = 0;i<n;i++){
            vector<int> ansi;
            for(int j = 0;j<n;j++){
                ansi.push_back(0);
            }ans.push_back(ansi);
        }
        
        int sti = 0;int stj = 0;int edi = ans.size()-1;int edj = ans[0].size()-1;int k = 1;
        while(stj<=edj and sti<=edi){
            for(int j = stj;j<=edj;j++){
                ans[sti][j] = k;
                k++;
            }
            sti++;
            for(int i = sti;i<=edi;i++){
                ans[i][edj] = k;
                k++;
            }
            edj--;
            
                for(int j = edj;j>=stj;j--){
                    ans[edi][j] = k;
                    k++;
                }

            edi--;
            
                for(int i = edi;i>=sti;i--){
                    ans[i][stj] = k;
                    k++;
                }
            
            stj++;
        }
        return ans;
    }
};