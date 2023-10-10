bool isPalindrome(int x)
{
    if (x < 0) {
        return false; // Negative numbers are not palindromes
    }
    
    int original = x;
    long int reversed = 0;
    
    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    
    return original == reversed;
}
