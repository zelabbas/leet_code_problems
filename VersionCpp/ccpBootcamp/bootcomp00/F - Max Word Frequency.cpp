#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	int 				n;
	string				key;
	map<string, int>	mp;
	int max;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> key;
		mp[key] = mp[key] + 1;
	}
	map<string, int>::iterator it = mp.begin();
	map<string, int>::iterator save;
	max = 0;
	while (it != mp.end()) {
		if (it->second >= max) {
			max = it->second;
			save = it;
		}
		it++;
	}
	cout << save->first << " " << save->second;
}