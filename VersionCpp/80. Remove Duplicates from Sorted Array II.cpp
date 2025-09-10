// 80. Remove Duplicates from Sorted Array II


// solution 1
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() <= 2) return nums.size();

        int i = 2;
        for (int j = 2; j < nums.size(); j++) {

            if (nums[j] != nums[i - 2]) {
                nums[i] = nums[j];
                i++;
            }
        }

        return (i);
    }
};

// second solution
class Solution {
public:
    void shuffelArray(vector<int>& nums, int index) {
        int length = nums.size() - 1;
        while(index < length) {

            nums[index] = nums[index + 1];
            index++;
        }

        nums[index] = INT_MAX;
    }


    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int save = nums.size();

        if (nums.size() <= 2) return nums.size();

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == INT_MAX) {
                save = i;
                break;
            }
            if (nums[i] == nums[i - 1])
                count++;
            else
                count = 1;

            if (count > 2) {
                shuffelArray(nums, i);
                i--;
            }
        }

        return (save);
    }
};

