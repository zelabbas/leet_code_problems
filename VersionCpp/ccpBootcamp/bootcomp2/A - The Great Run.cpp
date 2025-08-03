#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N, K, T;
	int sum = 0;
	int mx = 0;
	cin >> T;
	for(int i = 0; i < T; i++) {
		cin >> N >> K;
		vector<int> _vec(N);
		for (int i = 0; i < N; i++) {
			cin >> _vec[i];
		}
		for (int i = 0; i < K ; i++) {
			sum += _vec[i];
		}
		mx = sum;
		for (int i = K; i < N; i++)
		{
			sum = sum - _vec[i - K] + _vec[i];
			mx = max(mx, sum);
		}
		sum = 0;
		cout << mx << "\n";
	}
}