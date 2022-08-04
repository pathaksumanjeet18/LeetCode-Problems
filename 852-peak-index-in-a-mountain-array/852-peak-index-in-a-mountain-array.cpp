class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0;int j = arr.size()-1;int mid = 0;
            while(i<(j)){
                 mid = i+ (j-i)/2;
                if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
                    return mid;
                else if(arr[mid]>arr[mid-1] or arr[mid]<arr[mid+1]){
                    i = mid;
                }
                else if(arr[mid]<arr[mid-1] or arr[mid]>arr[mid+1]){
                    j = mid;
                }
            }
        return -1;
    }
};