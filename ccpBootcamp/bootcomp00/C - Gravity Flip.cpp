#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int _value;
	vector<int>	arr;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> _value;
		arr.push_back(_value);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
}