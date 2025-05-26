#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

// using sorting
class Solution {
    public:
        bool isAnagram(string s, string t) {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
    
            return (s == t);
        }
};

// using hash map
class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.size() != t.size())
                return (false);
            unordered_map<char, int> mapCount;
    
            for(char c : s) {
                mapCount[c]++;
            }
    
            for(char c : t) {
                if (mapCount.find(c) == mapCount.end() || mapCount[c] == 0)
                    return (false);
                mapCount[c]--;
            }
    
            return true;
        }
};