class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> v;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int numi = v[(v.size())/2];int ans = 0;
        for(int i = 0;i<v.size();i++){
            int diff = abs(numi-v[i]);
            if(diff%x == 0){
                ans += (diff/x);
            }
            else{
                return -1;
            }
        }
        return ans;
        
    }
};