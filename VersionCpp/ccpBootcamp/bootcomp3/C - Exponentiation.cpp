#include <iostream>

using namespace std;

#define mod 1000000007

long	pow(long a, long b) {
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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long	a, b;
	int		n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (!b)
			cout << "1\n";
		else
			cout << pow(a, b) << "\n";
	}
	return (0);
}