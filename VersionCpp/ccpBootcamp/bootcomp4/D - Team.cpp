#include <iostream>

using namespace std;

int main() {

	int n;
	int NumberSolvePorblem;
	int _Value;
	int counter;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	NumberSolvePorblem = 0;
	counter = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> _Value;
			if (_Value == 1)
				counter++;
		}
		if (counter >= 2)
			NumberSolvePorblem++;
		counter = 0;
	}

	cout << NumberSolvePorblem << "\n";
	return (0);
}