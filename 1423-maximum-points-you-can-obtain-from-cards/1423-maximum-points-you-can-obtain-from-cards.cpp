class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i = cardPoints.size()-1;int maxi = INT_MIN;
        int fSum = 0;
        for(int j = 0;j<k;j++){
            fSum += cardPoints[j];
        }
        int j = (k-1);
        maxi = max(fSum,maxi);
        if(k==cardPoints.size()){
            return maxi;
        }
        while(j>=0){
            fSum -= cardPoints[j];
            fSum += cardPoints[i];
            maxi = max(fSum,maxi);
            j--;
            i--;
        }
        return maxi;
    }
};