class Solution {
public:
    bool canWePlace(vector<vector<string>>ans,int n,int r,int c){
         
        for(int i = 0;i<r;i++){
            if(ans[i][c] == "Q")
                return false;
        }
        int i = r;int j = c;
        while(i>=0 && j<n){
           
            if(ans[i][j] == "Q")
                return false;
             i -= 1;
            j += 1;
        }
        i = r;j = c;
        while(i>=0 && j>=0){
            
            if(ans[i][j] == "Q")
                return false;
            i -= 1;
            j -= 1;
        }
        return true;
    }
    void print(vector<vector<string>> ans,int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<ans[i][j] <<" ";
        }
            cout<<endl;
        }
    }
    bool placeQueens(vector<vector<string>> ans,int n,int r,int c,vector<vector<string>> &answer){
       if(r==n){
           vector<string> h;
           for(int i = 0;i<n;i++){
                string s = "";
               for(int j = 0;j<n;j++){
                   s += ans[i][j];
               }
               h.push_back(s);
           }
           answer.push_back(h);
           return false;
       }
        for(int i = 0;i<n;i++){
            if(canWePlace(ans,n,r,i)){
                ans[r][i] = "Q";
                bool successTill = placeQueens(ans,n,r+1,c,answer);
                if(successTill) return true;
                ans[r][i] = ".";
            }
        }
        return false;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<vector<string>> answer;
        for(int i = 1;i<=n;i++){
            vector<string> ansi = {".",".",".",".",".",".",".",".","."};
            ans.push_back(ansi);
        }
        placeQueens(ans,n,0,0,answer);
        return answer;
    }
};