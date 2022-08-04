class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
		sort(nums.begin(), nums.end());
		int length = nums.size() - 1, left, right;
		for ( int index = 0; index <= length; ++index )
		{
			if ( index > 0 && nums[index - 1] == nums[index] ) continue; 
			left = index + 1;
			right = length;
			while ( left < right )
			{
				if ( nums[index] + nums[left] + nums[right] < 0 ) ++left;
				else if ( nums[index] + nums[left] + nums[right] > 0 ) --right;
				else
				{
					vector<int> anotherAnswer { nums[index], nums[left], nums[right] };
					ans.push_back(anotherAnswer);
					++left;
					while ( left < right && nums[left] == nums[left - 1] ) ++left;
				}   
			}    
		}     
		return ans;
    }
};
