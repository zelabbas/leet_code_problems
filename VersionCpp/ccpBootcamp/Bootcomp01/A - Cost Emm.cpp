#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


string yesOrNo(vector<int> _vec, int target) {

	for (size_t i = 0; i < _vec.size(); i++) {
		if (_vec[i] == target)
			return ("YES\n");
	}
	return ("NO\n");
}

int main() {
	int n;
	int size, k;
	int _value;
	vector<string> _vecStr;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> size >> k;
		vector<int>	_vec(size);
		for(auto &i : _vec) cin >> i;
		_vecStr.push_back(yesOrNo(_vec, k));
	}
	for(auto &i : _vecStr) cout << i;	
}