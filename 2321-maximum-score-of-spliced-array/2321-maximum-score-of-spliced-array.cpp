class Solution {
public:
    int kadaneProcess(vector<int> nums1,vector<int> nums2){
        int maxi = INT_MIN;
        int cumm = 0;
        for(int i = 0;i<nums1.size();i++){
            cumm += (nums1[i]-nums2[i]);
            if(cumm<0)
                cumm = 0;
            maxi = max(cumm,maxi);
        }
        return maxi;
    }
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        int c1 = accumulate(nums1.begin(),nums1.end(),0);
        int c2 = accumulate(nums2.begin(),nums2.end(),0);
        int x = max(kadaneProcess(nums1,nums2)+c2,kadaneProcess(nums2,nums1)+c1);
        return x;
        
    }
};