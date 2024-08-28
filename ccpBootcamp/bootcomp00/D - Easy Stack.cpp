#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	int len;
	int _value, key;
	stack<size_t>	_stack;
	vector<size_t>	output;

	 ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> len;
	for (int i = 0; i < len; i++)
	{
		cin >> key;
		switch (key)
		{
			case 1:
				cin >> _value;
				_stack.push(_value);
				break;
			case 2:
				if (!_stack.empty())
					_stack.pop();
				break;
			case 3:
				if (!_stack.empty())
					output.push_back(_stack.top());
				else
					output.push_back(-1);
		}
	}
	for (int i = 0; i < output.size(); i++)
	{
		if (output[i] == -1)
			cout << "Empty!\n";
		else
			cout << output[i] << "\n";
	}
}
