#include <iostream>
#include <vector>

using namespace std;

class Solution {
	vector<int> _vec;
public:
	int longestConsecutive(vector<int>& nums) {
		int ans = 0, count = 1;

		if (nums.empty())
			return (ans);

		sort(nums.begin(), nums.end());

		_vec.push_back(nums[0]);

		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] != nums[i - 1])
				_vec.push_back(nums[i]);
		}
		cout << "_vec : ";
		for (int i = 0; i < _vec.size(); i++)
		{
			cout << _vec[i] << " ";
		}
		cout << endl;
		for (int i = 1; i < _vec.size(); i++)
		{
			if (_vec[i] == _vec[i - 1] + 1)
				count++;
			else
				count = 1;
			ans = max(ans, count);
		}
		return (ans);
	}
};


int main() {
	vector<int> _vec = {2,20,4,10,3,4,5};

	Solution A;
	cout << "the resutl is :  " << A.longestConsecutive(_vec);
}