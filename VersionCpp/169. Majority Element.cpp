class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int save  = -1;
        int count = 0;
        int maxAppear = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if ((i + 1 <  nums.size()) && nums[i] == nums[i + 1])
                count++;
            else {
                count++;
                if (count > maxAppear)
                    save = i;
                maxAppear = max(count, maxAppear);
                count = 0;
            }
        }
        return (nums[save]);
    }
};