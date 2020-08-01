class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        bool is_first = false;
        
        if (word.size() > 0 && isupper(word[0])) {
            is_first = true;
        }
        
        for (char c : word) {
            if (isupper(c)) {
                ++count;
            }
        }
        
        if (count == word.size() || count == 0 || (count == 1 && is_first))   return true;
        return false;
    }
};
