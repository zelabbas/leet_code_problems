#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int mtx[5][5];
	int rowPos;
	int colsPos;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> mtx[i][j];
			if (mtx[i][j] == 1) {
				rowPos = i;
				colsPos = j;
			}
		}
	}

	cout << (abs(rowPos - (5 / 2)) + abs(colsPos - (5 / 2))) << "\n";
	return (0);
}