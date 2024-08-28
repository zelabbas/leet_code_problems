#include <iostream>
#include <vector>

using namespace std;

long long minimumMoves(vector<long long> _vec) {
	long long moves;

	moves = 0;
	for (int i = 1; i < _vec.size(); i++)
	{
		if (_vec[i] < _vec[i - 1]) {
			moves += (_vec[i - 1] - _vec[i]);
			_vec[i] = _vec[i - 1];
		}
	}
	return (moves);
}

int main() {
	int n;
	cin >> n;
	vector<long long> _vec(n);
	for (auto &i : _vec) cin >> i;
	cout << minimumMoves(_vec) << "\n";
	return (0);
}