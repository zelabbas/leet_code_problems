#include <iostream>
#include <map>
#include <vector>

using namespace std;

void twoSum(vector<int>& nums, int target) {
		map<size_t, size_t> mp;
		vector<int> _vec;
		
		for(int i = 0; i < nums.size(); i++)
		{
			auto it = mp.find(nums[i]);
			if (it != mp.end()) {
				_vec.push_back(mp[nums[i]]);
				_vec.push_back(i);
				break;
			}
			else
				mp[target - nums[i]] = i;
		}
		if (_vec.size() != 0)
			cout << _vec[0] + 1 << " " << _vec[1] + 1 << "\n";
		else
			cout << "IMPOSSIBLE\n";
}

int main() {
	int		len;
	size_t	_value, key, x;
	map<size_t, size_t>	_map;
	vector<int>			_vec;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> len;
	cin >> x;

	for (size_t i = 0; i < len; i++)
	{
		cin >> _value;
		_vec.push_back(_value);
	}
	twoSum(_vec, x);
}
