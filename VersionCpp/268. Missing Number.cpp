// 268. Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        // sort(nums.begin(), nums.end());
        // int l = 0;
        // int r = nums.size() - 1;
        // int missing = nums.size();

        // while (l <= r) {
        //     int mid = l + (r - l) / 2;

        //     if (nums[mid] > mid) {
        //         missing = mid;
        //         r = mid - 1;
        //     }
        //     else {
        //         l = mid + 1;
        //     }
        // }

        // return missing;
        int n = nums.size();

        int totalSum = (n * (n + 1)) / 2;
        int sum = accumulate(nums.begin(), nums.end(), 0);

        return (totalSum - sum);
    }
};