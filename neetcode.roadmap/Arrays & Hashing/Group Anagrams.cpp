#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>


using namespace std;

// using sorting
class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            
            unordered_map<string, vector<string>> anagramGroups;
            vector<vector<string>> result;

            for(string& str : strs) {
                string sortedStr = str; // create a copy of the string to sort
                sort(sortedStr.begin(), sortedStr.end());
                anagramGroups[sortedStr].push_back(str);
            }

            for(unordered_map<string, vector<string>>::iterator it = anagramGroups.begin(); it != anagramGroups.end(); ++it) {
                result.push_back(it->second);
            }
            return result;
        }
};

int main() 
{
    Solution solution;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = solution.groupAnagrams(strs);

    for(const auto& group : result) {
        for(const auto& str : group) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}   