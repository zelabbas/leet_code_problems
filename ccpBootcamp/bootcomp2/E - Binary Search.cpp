#include <iostream>
#include <vector>

using namespace std;
bool searchInsert(vector<int>& nums, int target)
{
	int left = 0;
	int	right = nums.size() - 1;
	int mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (nums[mid] == target)
			return (true);
		else if (nums[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (false);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q, a;
	int k;
	cin >> n;
	vector<int> _vec(n);
	for(auto &i : _vec) cin >> i;

	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> a;
		cout << searchInsert(_vec, a) << "\n";
	}
}