#include <iostream>

using namespace std;

class Solution {
	public:
	void	Magnets();
};

void	Solution::Magnets() {
	int n;
	int currValue;
	int	prevValue;
	int _max = 1;
	bool firstValue = 1;

	cin >> n;
	while (n > 0)
	{
		cin >> currValue;
		if (firstValue) {
			prevValue = currValue;
			firstValue = 0;
		}

		if (prevValue != currValue) {
			_max++;
			prevValue = currValue;
		}
		n--;
	}
	cout << _max << endl;
}
 
int main() {
	Solution sol;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sol.Magnets();
	return (0);
}