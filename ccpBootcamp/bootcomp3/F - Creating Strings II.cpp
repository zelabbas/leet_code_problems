#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define mod 1000000007

long	powe(long a, long b) {
	long long res = 1;

	while (b)
	{
		if (b % 2) {
			res = (res * a) % mod;
		}
		b /= 2;
		a = (a * a) % mod;
	}
	return (res);
}

long	fact(int n) {

	long long res;
	if (n < 2)
		return (1);
	res = 1;
	for (int i = 2; i <= n; i++)
	{
		res = (res * i) % mod;
	}
	return (res);
}

int modInverse(int a) {
	return powe(a, mod - 2);
}

int main() {

	string	s;
	map<char, int> mp;
	vector<long>	factor;

	cin >> s;
	for (auto &i : s) mp[i]++;
	for (auto[k, v] : mp)
		factor.push_back(fact(v));
	long denominator = 1;
	for (auto &i : factor)
		denominator = (denominator * i) % mod;
	cout << (fact(s.size()) * modInverse(denominator)) % mod << "\n";
}