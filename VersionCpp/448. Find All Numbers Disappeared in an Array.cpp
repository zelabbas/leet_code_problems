// 448. Find All Numbers Disappeared in an Array
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<bool> seen(nums.size() + 1, false);

        for (int i = 0; i < nums.size(); i++) {
            seen[nums[i]] = true;
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (!seen[i])
                ans.push_back(i);
        }

        return ans;
    }
};