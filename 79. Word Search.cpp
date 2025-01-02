class Solution {
public:

    bool backTracking(vector<vector<char>>& board, string word, int m, int n, int col, int row ,int index) {
        if (index == word.length())
            return (true);
        
        if (col < 0 || row < 0 || col == n || row == m || word[index] != board[row][col] || board[row][col] == '!')
            return (false);
        char c = board[row][col];
        board[row][col] = '!';
        index++;
        bool top = backTracking(board, word, m, n, col, row - 1, index);
        bool right = backTracking(board, word, m, n, col + 1, row, index);
        bool bottum = backTracking(board, word, m, n, col, row + 1, index);
        bool left = backTracking(board, word, m, n, col - 1, row, index);
        board[row][col] = c;
        return (top || right || bottum || left);
    }

    bool exist(vector<vector<char>>& board, string word) {

        int m = board.size();
        int n = board[0].size();
        int index = 0;
    

        for(int i = 0; i < m ; i++) {
            for(int j = 0; j < n; j++) {
                if (word[0] == board[i][j]) {
                    if (backTracking(board, word, m, n, j, i, index))
                        return (true);
                }
            }
        }
        return (false);
    }
};