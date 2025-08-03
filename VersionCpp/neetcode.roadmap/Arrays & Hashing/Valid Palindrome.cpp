#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



class Solution {
    public:
        bool isPalindrome(string s) {
            
        }
};


class Solution {
    public:
        bool isPalindrome(string s) {
            int end = s.size() - 1;
            int start = 0;

            while (end > start)
            {
                if (!isalnum(s[start])) {
                    start++;
                    continue;
                }
                if (!isalnum(s[end])) {
                    end--;
                    continue;
                }

                if (tolower(s[start]) != tolower(s[end])) {
                    return false;
                }
                start++;
                end--;
            }

            return true;
            
        }
};
    