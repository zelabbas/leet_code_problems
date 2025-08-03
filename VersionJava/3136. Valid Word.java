class Solution {

    public boolean checkString(String str) {
        String vowels = "aeiou";
        str = str.toLowerCase();
        boolean hasVowel = false;
        boolean hasConsonant = false;

        for(char c : str.toCharArray()) {
            if (!Character.isLetterOrDigit(c))
                return (false);
            if (vowels.indexOf(c) != -1)
                hasVowel = true;
            else if (!Character.isDigit(c)) {
                hasConsonant = true;
            }
        }

        return (hasVowel && hasConsonant);
    }

    public boolean isValid(String word) {
        if (word.length() < 3 || !checkString(word))
            return (false);
        return (true);
    }
}