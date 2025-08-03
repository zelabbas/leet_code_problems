#include <iostream>

using namespace std;

int main() {
	int countA;
	int countB;

	char c;
	string	str;
	cin >> str;
	countA = 0, countB = 0;
	for (int i = 0; i < str.size() - 1; i +=2)
	{
		if (str[i] == 'A') {
			if (str[i + 1] == '1')
				countA += 1;
			else
				countA += 2;
		}
		else
		{
			if (str[i + 1] == '1')
				countB += 1;
			else
				countB += 2;
		}
	}

	if (countA > countB)
		cout << "A\n" ;
	else
		cout << "B\n";
}