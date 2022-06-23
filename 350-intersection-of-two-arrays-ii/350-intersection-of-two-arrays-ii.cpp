class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;unordered_map<int,int>mpp1;
        for(int i = 0;i<nums1.size();i++){
            mpp[nums1[i]]++;
        }
        for(int i = 0;i<nums2.size();i++){
            mpp1[nums2[i]]++;
        }
        vector<int> ansi;
        for(int i = 0;i<nums2.size();i++){
            if(mpp.find(nums2[i])!=mpp.end() and mpp1.find(nums2[i])!=mpp1.end()){
                int k = min(mpp[nums2[i]],mpp1[nums2[i]]);
                mpp.erase(nums2[i]);
                mpp1.erase(nums2[i]);
                while(k--){
                    ansi.push_back(nums2[i]);
                }
            }
        }
        return ansi;
    }
};