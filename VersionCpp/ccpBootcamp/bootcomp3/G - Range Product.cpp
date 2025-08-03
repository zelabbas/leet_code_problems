#include <iostream>
#include <vector>

using namespace std;

#define mod 1000000007

// long	product(vector<int>& _vec ,int l, int r) {
// 	long long res = 1;
// 	for (size_t i = l; i <= r; i++)
// 		res = (res * _vec[i]) % mod;
// 	return (res);
// }

long long	powe(long long a, long long b) {
	long long res = 1;

	while (b)
	{
		if (b % 2) {
			res = (res * a) % mod;
		}
		b /= 2;
		a = (a * a) % mod;
	}
	return (res);
}

long long modInverse(long long a) {
	return powe(a, mod - 2);
}


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, Q;
	int L , R;

	cin >> N >> Q;
	vector<long long> _vec(N);
	for (int i = 0; i < N; i++)
	{
		cin >> _vec[i];
		if (i)
			_vec[i] = (_vec[i] * _vec[i - 1]) % mod;
	}
	
	while (Q--)
	{
		cin >> L >> R;
		L--, R--;
		if (L == 0)
			cout << _vec[R] << "\n";
		else
			cout << (_vec[R] * (modInverse(_vec[L - 1]) % mod))  % mod << "\n";
	}
}