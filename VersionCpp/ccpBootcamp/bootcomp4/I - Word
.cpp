#include <iostream>

using namespace std;

class Solution {
	public:
	void	Word(string& str);
};

void	Solution::Word(string& str) {
	int i = 0;
	int countUpper = 0;
	int countLower = 0;

	while (i < str.size())
	{
		if (islower(str[i]))
			countLower++;
		if (isupper(str[i]))
			countUpper++;
		i++;
	}

	if (countLower >= countUpper) {
		for (auto& c : str)
			c = tolower(c);
	}
	else {
		for (auto& c : str)
			c = toupper(c);
	}

	cout << str << "\n";
}
 
int main() {

	string str;
	Solution sol;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> str;
	sol.Word(str);
	return (0);
}