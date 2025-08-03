#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int nbr;
	int i;
	cin >> nbr;
	i = 2;
	cout << nbr << ":";
	while (nbr > 1)
	{
		if (nbr % i == 0) {
			cout << " " << i;
			nbr /= i;
		}
		else {
			if (nbr % 2 == 1)
				i += 2;
			else
				i += 1;
		}
	}
	cout << "\n";
}