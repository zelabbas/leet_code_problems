#include<iostream>
#include<vector>

using namespace std;

class Solution {
	vector<vector<int> > _res;
public:
	vector<vector<int> > threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int i = 0;
		int l = 0;
        int r = 0;
		int sum;


		for (int i = 0; i < nums.size(); i++)
		{
			// check if the value in the index i  is > 0 just break 
            if (nums[i] > 0)
                break;
			if (i != 0 && (nums[i] == nums[i - 1]))
				continue;
			l = i + 1;
            r = nums.size() - 1;
			while (l < r)
			{
				sum = nums[i] + nums[l] + nums[r];
				if (sum > 0)
					r--;
				else if (sum < 0)
					l++;
				else {
					_res.push_back({nums[i],nums[l], nums[r]});
					l++;
                    // r--;
					while (l < r)
					{
						if (nums[l] != nums[l - 1])
							break;
						l++;
					}
				}
			}
		}
		return (_res);
	}
};