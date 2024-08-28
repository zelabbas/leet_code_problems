#include <iostream>

using namespace std;

bool	isPrime(long n) {

	for (size_t i = 2; i  <= (n / i); i++)
	{
		if ((n % i) == 0)
			return (false);
	}
	return (true);
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	bool	exist = false;
	long long n, m;

	cin >> n >> m;

	for (int i = n; i <= m; i++)
	{
		if (isPrime(i)) {
			cout << i << "\n";
			exist = true;
		}
	}
	if (!exist)
		cout << "Absent\n";
	return (0);
}
