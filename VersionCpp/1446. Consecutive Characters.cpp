class Solution {
public:
    int maxPower(string s) {
        int save = 1;
        int count = 1;
        // if (s.empty())
        //     return (save);
        // count = 1;
        // if (s.length() == 1)
        //     return (count);
        for(int i = 0; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1])
                count++;
            else {
                save = max(save, count);
                count = 1;
            }
        }
        save = max(save, count);
        return (save);
    }
};