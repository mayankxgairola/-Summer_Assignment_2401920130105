class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while(i < j) {
            char left = s[i];
            char right = s[j];

            if(isalnum(left) == false) {
                i++;
                continue;
            }

            if(isalnum(right) == false) {
                j--;
                continue;
            }

            if(tolower(left) != tolower(right)) return false;

            i++, j--;
        }

        return true;
    }
};
