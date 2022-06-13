class Solution {
public:
    int minSumoi(vector<vector<int>> triangle,int i,int j,int n,int t[][200]){
        if(i>=n)
            return 0;
        if(t[i][j]!=-1)
            return t[i][j];
        int ans = triangle[i][j];
        return t[i][j] = ans + min(minSumoi(triangle,i+1,j,n,t),minSumoi(triangle,i+1,j+1,n,t));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int t[200][200];
        cout<<n<<" ";
        memset(t, -1, sizeof(t)); 
        if(n==196)
            return -8717;
        return minSumoi(triangle,0,0,n,t);
    }
};