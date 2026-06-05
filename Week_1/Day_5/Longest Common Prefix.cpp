class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];

        int common = s.length();

        for(int i = 1; i < strs.size(); i++) {
            int j = 0;
            int k = 0;

            string t = strs[i];
            while(j < s.length() && k < t.length()) {
                if(s[j] == t[k]) j++, k++;
                else break;
            }

            common = min(common, k);
        }

        string res;
        for(int i = 0; i < common; i++) {
            res += s[i];
        }

        return res;
    }
};
