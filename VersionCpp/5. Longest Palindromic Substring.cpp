class Solution {
public:


    bool isPalindromicSubstring(string& s, int i, int j) {

        while(i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        

        int length = s.length();
        int maxlen = 1;
        int start = 0;
            
        for(int i = 0; i < length; i++) {
            for(int j = i; j < length; j++) {
                
                if (isPalindromicSubstring(s, i, j) && (j - i + 1) > maxlen) {
                    start = i;
                    maxlen = j - i + 1;
                }
            }
        }

        return s.substr(start, maxlen);
    }
};