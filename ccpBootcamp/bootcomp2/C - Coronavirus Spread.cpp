#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N, T;
	cin >> T;
	while (T--)
	{
		cin >> N;
		vector<int> _vec(N);
		for (auto &i : _vec)	cin >> i;
		int mn = 2147483647;
		int mx = 1;
		int l = 0, r = 0;
		while (r < N)
		{
			if (l == r)
				r++;
			else if (_vec[r] - _vec[r - 1] <= 2)
				r++;
			else {
				mn = min(mn, r - l);
				mx = max(mx, r - l);
				l = r;
				r++;
			}
		}
		mn = min(mn, r - l);
		mx = max(mx, r - l);
		cout << mn <<  " " << mx << "\n";
	}
}