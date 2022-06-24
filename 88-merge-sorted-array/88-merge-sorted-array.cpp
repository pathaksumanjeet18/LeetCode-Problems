class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;int j = n-1;
        int k = m + n - 1;
        if(n==0)
            return;
        int l = 0;
        if(m==0){
            for(int i = 0;i<n;i++){
                nums1[l] = nums2[i];
                l++;
            }
            return;
        }
        while(i>=0 and j>=0){
            
            if(nums2[j]>=nums1[i]){
                nums1[k] = nums2[j];
                k--;
                j--;
            }
            else{
                nums1[k] = nums1[i];
                i--;k--;
            }
        }
        if(i<0){
            while(j>=0){
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
        return;
        
    }
};