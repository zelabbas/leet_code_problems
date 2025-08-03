#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// int lowerbound(vector<int>& nums, int target)
// {
// 	int left = 0;
// 	int	right = nums.size() - 1;
// 	int mid;
// 	bool check = false;
// 	while (left < right)
// 	{
// 		mid = left + (right - left) / 2;
// 		if (nums[mid] >= target) 
// 		{
// 			check = true;
// 			right = mid;
// 		}
// 		else
// 			left = mid + 1;
// 	}
// 	return (left);
// }

// int upperbound(vector<int>& nums, int target)
// {
// 	int left = 0;
// 	int	right = nums.size() - 1;
// 	int mid;
// 	while (left < right)
// 	{
// 		mid = left + (right - left) / 2;
// 		if (nums[mid] > target)
// 			right = mid;
// 		else 
// 			left = mid + 1;
// 	}
// 	if (left == nums.size() - 1)
// 		left++;
// 	return (left);
// }
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
		
	int n, q, a;
	std::cin >> n;
	vector<int> _vec(n);
	for (auto &i : _vec) cin >> i;
	std::cin >> q;
	for (int i = 0; i < q; i++) {
		std::cin >> a;
		cout << std::distance(_vec.begin(), std::lower_bound(_vec.begin(), _vec.end(), a)) << " "
	<< std::distance(_vec.begin(), std::upper_bound(_vec.begin(), _vec.end(), a)) << "\n";
	}
	return 0;
}

//		cout << std::lower_bound(_vec.begin(), _vec.end(), a) << " " << std::upper_bound(_vec.begin(), _vec.end(), a) << "\n";
