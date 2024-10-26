#include <iostream>
#include <unordered_map>
#include <unordered_set>



using namespace std;

class Solution {
	unordered_map<char, unordered_set<char> > _rows;
	unordered_map<char, unordered_set<char> > _cols;
	unordered_map<char, unordered_set<char> > _squares;
	public:

    void    appendInRowsColsSquares(char cell, int r, int c) {
        _rows[r].insert(cell);
		_cols[c].insert(cell);
		_squares[(r / 3) * 3 +  c / 3].insert(cell);
    }

	bool checkRowsColsSqaure(char cell, int r, int c) {
		if (_rows[r].count(cell) || _cols[c].count(cell) || _squares[(r / 3) * 3 + c / 3].count(cell))
			return (true);
        return (false);
	}

	bool isValidSudoku(vector<vector<char>>& board) {
		char cell;
		for (int r = 0; r < board.size(); r++)
		{
			for (int c = 0; c < board.size(); c++)
			{
				if (board[r][c] != '.') {
                    cell = board[r][c];
				    if (checkRowsColsSqaure(cell, r, c))
				    	return (false);
				    appendInRowsColsSquares(cell, r, c);
                }
			}
		}
		return (true);
	}
};
