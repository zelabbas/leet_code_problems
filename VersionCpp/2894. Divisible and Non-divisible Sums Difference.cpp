// 2894. Divisible and Non-divisible Sums Difference
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int divisibleSum = 0;
        int undivisibleSum = 0;


        for (int i = 1; i <= n; i++) {
            if ((i % m) == 0)
                divisibleSum += i;
            else
               undivisibleSum += i; 
        }

        return (undivisibleSum - divisibleSum);
    }
};