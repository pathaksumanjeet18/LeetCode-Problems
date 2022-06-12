class Solution {
public:
    int t[100][100];
    int noofpaths(int i,int j,int m,int n,int t[][100]){
        if(i>=m || j>=n || i<0 || j<0)
            return 0;
        if(i==(m-1) && j==(n-1))
            return 1;
        if(t[i][j] != -1){
            return t[i][j];
        }
        
        return t[i][j] =  noofpaths(i+1,j,m,n,t) + noofpaths(i,j+1,m,n,t);
    }
    int uniquePaths(int m, int n) {
        memset(t,-1,sizeof(t));
        return noofpaths(0,0,m,n,t);
    }
};