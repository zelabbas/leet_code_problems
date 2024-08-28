#include <iostream>
#include <string>

using namespace std;

int lengthOfLongestRepetition(string s) {
	int maxLen = 1;
	int currentLen = 1;

	for (size_t i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1])
			currentLen++;
		else
		{
			maxLen = max(maxLen, currentLen);
			currentLen = 1;
		}
	}
	
	maxLen = max(maxLen, currentLen);
	return maxLen;
}


int main() {

	string s;

	cin >> s;
	cout << lengthOfLongestRepetition(s) << "\n";
}