#include <iostream>

using namespace std;

int main() {
	int		len;
	int counterAnton;
	int counterDanik;
	
	string 	s;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> len >> s;
	len--;
	counterAnton = 0;
	counterDanik = 0;
	while (len >= 0)
	{
		if (s[len] == 'A')
			counterAnton++;
		else
			counterDanik++;
		len --;
	}
	
	if (counterAnton > counterDanik)
		cout << "Anton\n";
	else if (counterAnton < counterDanik)
		cout << "Danik\n";
	else
		cout << "Friendship\n";
	return (0);
}