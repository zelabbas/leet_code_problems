// 189. Rotate Array
class Solution {
public:
    void shuffelArray(vector<int>& nums, int index) {

        int value = nums[index];
        int i = nums.size() - 1;
        while ( i > 0 ) {
            nums[i] = nums[i - 1];
            i--;
        }

        nums[i] = value;
    }

    void rotate(vector<int>& nums, int k) {

    //     int index = nums.size() - 1;

    //     while (k > 0) {
    //         shuffelArray(nums, index);
    //         k--;
    //    } 

        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};