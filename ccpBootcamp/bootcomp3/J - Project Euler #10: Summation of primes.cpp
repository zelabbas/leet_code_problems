#include <iostream>
#include <vector>

using namespace std;

bool	isPrime(long n) {

	if (n == 1)
		return (false);
	if (n == 2)
		return (true);
	for (size_t i = 2; i  <= (n / i); i++)
	{
		if ((n % i) == 0)
			return (false);
	}
	return (true);
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T, N;
	int index;

	vector<long> _vec;
	for (int i = 2; i < 1000000; i++)
	{
		if (isPrime(i))
			_vec.push_back(i);
	}

	vector<long> _prefixSum(_vec.size());
	for (int i = 0; i < _vec.size(); i++)
	{
		_prefixSum[i] = _vec[i];
		if (i > 0)
			_prefixSum[i] += _prefixSum[i - 1];
	}

	cin >> T;

	while (T--)
	{
		cin >> N;
		auto it = lower_bound(_vec.begin(), _vec.end(), N);
		index = distance(_vec.begin(), it);
		if (*it > N)
			--index;
		cout << _prefixSum[index] << "\n";
	}
	
	return (0);
}