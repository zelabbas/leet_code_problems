// 81. Search in Rotated Sorted Array II
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int r = nums.size() - 1;
        int l = 0;


        while (r >= l) {
            if (nums[l] == target || nums[r] == target)
                return (true);
            r--;
            l++;
        }

        return (false);
    }
};