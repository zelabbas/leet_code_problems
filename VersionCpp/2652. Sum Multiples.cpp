// 2652. Sum Multiples
class Solution {
public:
    bool divisible(int number) {
        return (number % 7) == 0  || (number % 5) == 0 || (number % 3) == 0;
    }

    int sumOfMultiples(int n) {
        int sum = 0;

        for(int i = 1; i <= n; i++) {
            if (divisible(i))
                sum += i;
        }

        return (sum);
    }
};