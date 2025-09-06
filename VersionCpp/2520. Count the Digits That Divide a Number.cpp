//2520. Count the Digits That Divide a Number
class Solution {
public:
    bool isDivisible(int diviser, int num) {
        return (num % diviser) == 0;
    }

    int countDigits(int num) {
        int count = 0;
        int number = num;

        while(num) {
            if (isDivisible(num % 10, number))
                count++;
            num /= 10;
        }

        return (count);
    }
};