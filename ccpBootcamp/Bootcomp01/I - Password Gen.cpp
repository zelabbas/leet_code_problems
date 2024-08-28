#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<char> _vec(k);
	for (int i = 0; i < k; i++)
		_vec[i] = 'a' + i;
	for (int i = 0; i < n; i++)
		cout << _vec[i % k];
	cout << "\n";
}