#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> _vec(N);
	for (int i = 0; i < N; i++) {
		cin >> _vec[i];
	}
	int mn = 2147483647;
	int mx = 0;
	int l = 0;
	int r = 0;
	while (r < N)
	{
		if (l == r)
			r++;
		else if (_vec[r] - _vec[r - 1] <= 2) {
			mx = max(mx, r - l);
			mn = min(mn, r - l);
			r++;
			l++;
		} else {
			cout << mn << " " << mx << " "
		}
	}
	
	cout << mx << "\n";
}