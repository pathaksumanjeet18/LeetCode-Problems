class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof = 0;int i = 0; int j = 1;
        if(prices.size()<=1)
            return 0;
        while(j<prices.size()){
            if(prices[i]>prices[j]){
                i++;
                
            }
            else if(prices[i]<=prices[j]){
                prof = max(prof,prices[j]-prices[i]);
                j++;
            }
            else if(prices[i]>prices[j]){
                i=j;
            }
        }
        return prof;
    }
};