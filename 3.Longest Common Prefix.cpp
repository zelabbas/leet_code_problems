#include <iostream>
#include <string>

class Solution {
public:
    string longestString(const string& str1,const string& str2)
    {
        size_t len1 = str1.length();
        size_t len2 = str2.length();
        size_t minLength = std::min(len1, len2);

    	std::string buffer;
        for (size_t i = 0; i < minLength; ++i) {
            if (str1[i] != str2[i])
    			break;
    		buffer += str1[i];
        }
    	return buffer;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string buf;
        int size = strs.size();
        if (size == 0)
            return ("");
        if (size == 1)
            return strs.at(0);
        buf = longestString(strs.at(0), strs.at(1));
        if (buf.empty())
            return buf;
        for(size_t i = 2; i < size; i++)
        {
            buf = longestString(buf, strs.at(i));
            if (buf.empty())
                return buf;
        }
        return (buf);
    }
};
