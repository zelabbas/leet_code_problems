// 179. Largest Number
class Solution {
public:

   bool static compare(string s1, string s2) {
            return s1 + s2 > s2 + s1;
    }

    string largestNumber(vector<int>& nums) {
        
        vector<string> strings;
        for (int i = 0; i < nums.size(); i++) {
            strings.push_back(to_string(nums[i]));
        }
        

        sort(strings.begin(), strings.end(), compare);
        if (strings[0] == "0")
            return ("0");


        string ans = "";
        for (auto s : strings) {
                ans += s;
        }


        return (ans);
    }
};