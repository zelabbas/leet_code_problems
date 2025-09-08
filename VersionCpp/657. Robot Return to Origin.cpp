//657. Robot Return to Origin
class Solution {
public: 
    bool judgeCircle(string moves) {
       return (count(moves.begin(), moves.end(), 'U') == count(moves.begin(), moves.end(), 'D') &&
        count(moves.begin(), moves.end(), 'R') == count(moves.begin(), moves.end(), 'L')
       );
    }   
};

// solution 2
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (char move : moves) {
            if (move == 'U') y++;
            else if (move == 'D') y--;
            else if (move == 'L') x--;
            else if (move == 'R') x++;
        }
        return x == 0 && y == 0;
    }
};