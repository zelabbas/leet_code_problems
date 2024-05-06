class Solution {
public:
    int myAtoi(string s) {
        int sign;
        long result;
        int i;
    
        sign = 1;
        result = 0;
        i = 0;
        while(s[i] && ((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
            i++;
        if (s[i] == '+' || s[i] == '-')
        {
            if (s[i] == '-')
                 sign *= -1;
            i++;
        }
        while(s[i] && (s[i] >= '0' && s[i] <= '9'))
        {
            result = result * 10 + (s[i] - '0');
            i++;
            if ((result > INT_MAX && sign == -1))
                return (-2147483648);
            else if (s[i] && (result > INT_MAX))
                return (2147483647);
        }
        return ((int)result * sign);
    }
};