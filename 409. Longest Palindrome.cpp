#include <iostream>
#include <vector>

using namespace std;

// class Solution {
// public:
//     int longestPalindrome(string s) {
//         vector<int> tab(52, 0);
//         int plindromlen = 0;
//         bool oddCenter = false;
    
//         for(int i = 0; i < s.length(); i++) {
//             if (isupper(s[i]))
//                 tab[s[i] - 'A' + 26]++;
//             else
//                 tab[s[i] - 'a']++;
//         }

//         for (auto count : tab)
//         {
//             if (count % 2 == 0)
//                 plindromlen += count;
//             else {
//                 plindromlen += count - 1;
//                 oddCenter = true;
//             }
//         }
        
//         if (oddCenter)
//             plindromlen++;
//         return plindromlen;
//     }
// };

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> set_char;

        int lenth = 0;
       for (auto c : s)
       {
            if (set_char.find(c) != set_char.end()) {
                set_char.erase(c);
                lenth += 2;
            }
            else
                set_char.insert(c);
       }
       if (!set_char.empty())
            lenth++;
        return (lenth);
    }
};