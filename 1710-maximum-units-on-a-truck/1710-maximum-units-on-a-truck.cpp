class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        for(int i = 0;i<boxTypes.size();i++){
            swap(boxTypes[i][0],boxTypes[i][1]);
        }
        sort(boxTypes.begin(),boxTypes.end());
        int ans = 0;
        for(int i = boxTypes.size()-1;i>=0;i--){
            if(boxTypes[i][1]<=truckSize){
                ans += boxTypes[i][0]*boxTypes[i][1];
                truckSize -= boxTypes[i][1];
            }
            else{
                ans += boxTypes[i][0]*truckSize;
                truckSize -= truckSize;
            }
            if(truckSize==0)
                break;
        }
        return ans;
    }
};