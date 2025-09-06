// 3024. Type of Triangle
class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[2];

        // Check triangle inequality
        if (a + b <= c || a + c <= b || b + c <= a)
            return "none";

        if (a == b && b == c)
            return "equilateral";
        else if (a == b || b == c || a == c)
            return "isosceles";
        else
            return "scalene";
    }
};