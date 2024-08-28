#include <iostream>
#include <vector>

using namespace std;


int main() {
	int n;
	int _value;
	vector<int> arr;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> _value;
		if (_value < 0)
			arr.push_back(_value);
		else
			arr.push_back(_value + 2);
	}
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
}