#include <iostream>
#include <cctype>

using namespace std;

int main() {

	string str1;
	string str2;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> str1 >> str2;
	int i = 0;
	while (i < str1.size())
	{
		char ch1 = tolower(str1[i]);
		char ch2 = tolower(str2[i]);

		if (ch1 < ch2) {
			cout << -1 << "\n";
			return 0;
		}
		if (ch1 > ch2) {
			cout << 1 << "\n";
			return 0;
		}
		i++;
	}
	cout << 0 << "\n";
	return (0);
}


// later why is this wrong !
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {

// 	string str1;
// 	string str2;
// 	bool	flag;

// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cin >> str1 >> str2;
// 	int i = 0;
// 	flag = 0;
// 	while (i < str1.size())
// 	{
// 		if (str1[i] < str2[i] && (char)(str2[i] - 32) != (char)str1[i]) {
// 			cout << -1 << "\n";
// 			flag = 1;
// 			break;
// 		}
// 		if (str1[i] > str2[i] && (char)(str1[i] - 32) != (char)str2[i]) {
// 			cout << 1 << "\n";
// 			flag = 1;
// 			break;
// 		}
// 		i++;
// 	}
// 	if (!flag)
// 		cout << 0 << "\n";
// 	return (0);
// }
