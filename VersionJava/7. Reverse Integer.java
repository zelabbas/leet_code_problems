class Solution {
    public int reverse(int x) {
        short sign = 1;
        long resulte = 0;

        if (x <= Integer.MIN_VALUE)
            return (0);

        if (x < 0) {
            x *= -1;
            sign *= -1;
        }
        
        while(x != 0) {
            resulte = resulte * 10 + (x % 10);
            x /= 10; 
        }

        resulte *= sign;
        if (resulte <= Integer.MIN_VALUE ||  resulte > Integer.MAX_VALUE)
            return (0);

        return (int)(resulte);
    }
}