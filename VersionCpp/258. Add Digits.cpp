class Solution {
public:
    int addDigits(int n) {
        
        int sum = 0;
        if (n >= -9 && n <= 9)
            return n;
        
        while(n) {
            sum += (n % 10);
            n /= 10;
        }
       return  addDigits(sum);
    }
};