#include <iostream>

using namespace std;

#define mod 998244353

int main() {
	int n;
	long long res;
	cin >> n;
	if (n < 2) {
		cout << "1\n";
		return (0);
	}
	res = 1;
	for (int i = 2; i <= n; i++)
	{
		res = (res * i) % mod;
	}
	cout << res << "\n";
	return (0);
}