#include <iostream>

using namespace std;

class Solution {
public:

	bool isPalindrome(string s) {
		int end;
		int start;

		end = s.size() - 1;
		start = 0;

		while (end >= start)
		{
			if (!isalnum(s[start])) {
				start++;
				continue ;
			}
			if (!isalnum(s[end])) {
				end--;
				continue;
			}
			if (tolower(s[end]) != tolower(s[start]))
				return (false);
		
			end--;
			start++;
		}
		return (true);
	}
};

int main() {

	string S = "tab a cat";
	Solution a;

	cout << a.isPalindrome(S);

	return (0);
}