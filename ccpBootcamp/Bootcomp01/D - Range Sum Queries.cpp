#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n,q;
	int a, b;
	cin >> n >> q;
	vector<long long> _vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> _vec[i];
		if (i)
			_vec[i] += _vec[i - 1];
	}
	while (q--)
	{
		cin >> a >> b;
		a--;
		b--;
		if (!a)
			cout << _vec[b] << "\n";
		else
			cout << _vec[b] - _vec[a - 1] <<  "\n";
	}
}