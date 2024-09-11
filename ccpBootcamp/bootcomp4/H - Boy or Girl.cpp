#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
	unordered_set<char> setChar;
	public:
	void	BoyOrGirl(const string& str);
};

void	Solution::BoyOrGirl(const string& str) {
	int	i = 0;
	int count = 0;

	while (i < str.size())
	{
		if (setChar.find(str[i]) == setChar.end()) {
			count++;
			setChar.insert(str[i]);
		}
		i++;
	}
	if (count % 2)
		cout << "IGNORE HIM!\n";
	else
		cout << "CHAT WITH HER!\n";
}
 
int main() {

	string str;
	Solution sol;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> str;
	sol.BoyOrGirl(str);
	return (0);
}