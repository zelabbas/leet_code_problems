#include <iostream>
#include <string>

using namespace std;

string subStringReverse(string& s, int start, int end) {

	int		i = start - 1;
	int		j = end - 1;
	char	tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
	return (s);
}


int main() {

	string s;
	int start, end;

	cin >> s;
	cin >> start >> end;
	cout << subStringReverse(s, start, end) << "\n";
}