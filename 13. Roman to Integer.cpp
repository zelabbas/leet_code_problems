#include <iostream>
#include <map>
#include <string>

using namespace std;

int	check_nextchar(char *str, char c)
{
	if (c == 'I')
	{
		if (*(str + 1) == 'V' || *(str + 1) == 'X')
			return (1);
	}
	else if (c == 'X')
	{
		if (*(str + 1) == 'L' || *(str + 1) == 'C')
			return (1);
	}
	else if (c == 'C')
	{
		if (*(str + 1) == 'D' || *(str + 1) == 'M')
			return (1);
	}
	return (0);
}

int main()
{
	string s = "III";
	int integer;
    map<char, int> my_map
    {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    integer = 0;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] == 'I' || s[i] == 'C' || s[i] == 'X')
		{
			if (check_nextchar(&s[i], s[i]))
			{
				integer += my_map[s[i + 1]] - my_map[s[i]];
				i++;
			}
			else
				integer += my_map[s[i]];
		}
		else
			integer += my_map[s[i]];
	}

	// or this is an other solution :
	/*
		for (size_t i = 0; i < s.length(); i++)
	    {
			if (s[i] < s[i + 1])
				integer -= my_map[s[i]];
			else
				integer += my_map[s[i]];
	    }
	*/
	cout << integer << endl;
}