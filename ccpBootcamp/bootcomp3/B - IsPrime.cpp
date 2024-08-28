#include <iostream>

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n;

	cin >> n;

	if (n < 2) {
		cout << "\"Not Prime\"\n";
		return (0); 
	}

	for (size_t i = 2; i  <= (n / i); i++)
	{
		if ((n % i) == 0) {
			cout << "\"Not Prime\"\n";
			return (0);
		}
	}
	cout << "\"Prime\"\n";
	return (0);
}