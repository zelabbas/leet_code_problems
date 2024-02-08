int reverse(int x){

    long res = 0;
    int sign = 1;
    if (x <= -2147483648)
        return (0);
    if (x < 0)
    {
        x *= -1;
        sign *= -1;
    }
    while(x)
    {
        res = (res * 10) + (x % 10);
        x /= 10;
    }
    res *= sign;
    if (res < -2147483648 || res > 2147483647)
        return (0);
    return (res);
}