// 2535. Difference Between Element Sum and Digit Sum of an Array
class Solution {
public:

    int sumDigit(int number) {
        int sum = 0;
        while(number) {
            sum += number % 10;
            number /= 10;
        }

        return sum;
    }

    int sum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum1 += nums[i];
            if (nums[i] <= 9)
                sum2 += nums[i];
            else
                sum2 += sumDigit(nums[i]);
        }

        return abs(sum1 - sum2);
    }


    int differenceOfSum(vector<int>& nums) {
        return (sum(nums));
    }
};