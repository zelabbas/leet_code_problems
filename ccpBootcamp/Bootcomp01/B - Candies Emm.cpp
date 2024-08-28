#include <iostream>

using namespace std;

int main() {
	int t, n;
	int countM = 0;
	int countB = 0;
	int _value;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> n;
		for (size_t j = 0; j < n; j++)
		{
			cin >> _value;
			if (_value % 2 == 0)
				countM += _value;
			else
				countB += _value;
		}
		if (countM > countB)
			cout << "YES\n";
		else
			cout << "NO\n";
		countM = 0, countB = 0;
	}
}