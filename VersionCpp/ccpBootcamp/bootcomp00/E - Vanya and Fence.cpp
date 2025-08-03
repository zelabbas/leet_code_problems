#include <iostream>

using namespace std;

int main() {
	int		len;
	int	_value, _h, count;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> len >> _h;
	count = 0;
	for (int i = 0; i < len; i++)
	{
		cin >> _value;
		if (_value <= _h)
			count += 1;
		else
			count += 2;
	}
	cout << count << endl;
}
