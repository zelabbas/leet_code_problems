#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> _vec(n);

	for (auto &i : _vec) cin >> i;

	int count = 0;
	int sum = 0;
	int start = 0;
	for (int i = 0; i < n; i++) {
		sum += _vec[i];
		while (sum > x && start <= i) {
			sum -= _vec[start];
			start++;
		}
		if (sum == x) {
			count++;
		}
	}
	cout << count << "\n";
}