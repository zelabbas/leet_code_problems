// 287. Find the Duplicate Number

// SOLUTION 1
class Solution {
public:

    int findDuplicate(vector<int>& nums) {
        // unordered_set<int> set;
        // for (int i = 0; i < nums.size(); i++) {
             // if (set.find(nums[i]) != set.end())
             //     return (nums[i]);
        //     if (!set.insert(nums[i]).second)
        //         return (nums[i]);
        // }
        // return (-1);

        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]);

            if (nums[index] < 0)
                return index;

            nums[index] = -nums[index];
        }
        
        return (-1);
    }
};