class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        long long int b = 0;long long int l = 0;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        for(int i = 1;i<horizontalCuts.size();i++){
            if(horizontalCuts[i]-horizontalCuts[i-1]>b)
                b = horizontalCuts[i]-horizontalCuts[i-1];
        }
        for(int i = 1;i<verticalCuts.size();i++){
            if(verticalCuts[i]-verticalCuts[i-1]>l)
                l = verticalCuts[i]-verticalCuts[i-1];
        }
        return (b*l)%1000000007;
    }
};