class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int save = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                count++;
            else {
                save = max(save, count);
                count = 0;
            }
        }
        save = max(save, count);
        return (save);
    }
};