class Solution {
public:
    int strStr(string s, string r) {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == r[0]) {
                bool check = 1;
                int j = i, k = 0;
                while(k < r.size()) {
                    if(j > s.size() || s[j] != r[k]) check = 0;
                    j++, k++;
                }

                if(check == 1) return i;
            }
        }

        return -1;
    }
};
