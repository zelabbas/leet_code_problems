// 442. Find All Duplicates in an Array
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        vector<int> freq(nums.size() + 1, 0);

        // map<int, int> map;

        for (int x: nums) {
            freq[x]++;
            if (freq[x] == 2)
                ans.push_back(x);
        }

        return ans;
    }
};