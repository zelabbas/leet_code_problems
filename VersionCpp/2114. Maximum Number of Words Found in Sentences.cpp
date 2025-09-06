// 2114. Maximum Number of Words Found in Sentences
class Solution {
public:

    int countspace(string& str) {
        int count = 0; 

        for (int i = 0; i < str.length() ;i++) {
            if (str[i] == ' ')
                count++;
        }
        
        return (count);
    }

    int findMax(vector<string>& sentences) {
        int max = 0;

        for(int i = 0; i < sentences.size(); i++) {
            int count = countspace(sentences[i]) + 1;
            if (max < count)
                max = count;
        }

        return max;
    }
    
    int mostWordsFound(vector<string>& sentences) {
       return findMax(sentences);
    }
};