#define max(a, b) ((a) > (b) ? (a) : (b))

int lengthOfLongestSubstring(char* s)
{
    int lastIndex[128] = {0}; // Assuming ASCII characters
    int maxLen = 0;
    int start = 0;
    int end = 0;

    while (s[end] != '\0')
    {
        start = max(start, lastIndex[s[end]]);
        maxLen = max(maxLen, end - start + 1);
        lastIndex[s[end]] = end + 1;
        end++;
    }

    return maxLen;
}