#include <iostream>
#include <vector>

using namespace std;

bool	isInarray(vector<int> arr, int _value) {
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == _value)
			return (true);
	}
	return (false);
}

int main() {
	int n1;
	int n2;
	int _value;
	vector<int> arr1;
	vector<int> arr2;
	vector<int> arr3;
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cin >> _value;
		arr1.push_back(_value);
	}
	cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		cin >> _value;
		arr2.push_back(_value);
	}
	for (int i = 0; i < arr1.size(); i++)
	{
		if (!isInarray(arr2, arr1[i]))
			arr3.push_back(arr1[i]);
	}
	cout << arr3.size() << endl;
	for (int i = 0; i < arr3.size(); i++)
	{
		cout << arr3[i] << " ";
	}
	return (0);
}