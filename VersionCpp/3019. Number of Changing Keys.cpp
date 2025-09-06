// 3019. Number of Changing Keys
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

    int countKeyChanges(string s) {
        int count = 0;
        string copy = toLowerCase(s);
        for (int i = 1; i < copy.length(); i++) {
            if(copy[i] != copy[i - 1])
                count++;
        }

        return count;
    }
};