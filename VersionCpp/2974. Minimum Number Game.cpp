class Solution {
public:

    vector<int> numberGame(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i += 2) {
            int bob = nums[i];
            int alice = nums[i + 1];
            res.push_back(alice);
            res.push_back(bob);
        }

        return (res);
    }
};