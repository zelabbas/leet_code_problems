#include <iostream>

using namespace std;

int main() {

	int a, b;
	int ans;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ans = 0;
	cin >> a >> b;
	while (a <= b)
	{
		ans++;
		a *= 3;
		b *= 2;
	}
	cout << ans << "\n";
	
	return (0);
}