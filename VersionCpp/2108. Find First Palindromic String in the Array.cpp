// 2108. Find First Palindromic String in the Array
class Solution {
public:

    bool ispalindromic(string s) {
        int i = 0;
        int j = s.length() - 1;

        while(i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }

    string firstPalindrome(vector<string>& words) {

       for(int i = 0; i < words.size(); i++) {
            if (ispalindromic(words[i]))
                return words[i];
       } 

       return ("");
    }
};