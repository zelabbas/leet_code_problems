// 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for (char& c : s) {
            if (c >= 'A' && c <= 'Z') {
                c += ('a' - 'A');
            }
        }
        return s;
    }
};