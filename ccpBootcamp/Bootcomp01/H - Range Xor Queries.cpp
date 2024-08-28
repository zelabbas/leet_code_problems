#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long n, q;
	long long a,b;
	cin >> n >> q;
	vector<long long> v(n);
	for(int i = 0; i < n ; i++) {
		cin >> v[i];
		if (i)
			v[i] = v[i] ^ v[i - 1];
	}

	while(q--) {
		cin >> a >> b;
		a--, b--;
		if (!a)
			cout << v[b] << "\n";
		else
			cout << (v[b] ^ v[a - 1]) << "\n";
	}
}