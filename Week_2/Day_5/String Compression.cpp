class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;
        int i = 0;

        while(i < chars.size()) {
            int j = i;

            while(j < chars.size() && chars[j] == chars[i]) {
                j++;
            }

            int cnt = j - i;

            chars[write++] = chars[i];

            if(cnt > 1) {
                string s = to_string(cnt);

                for(char c : s) {
                    chars[write++] = c;
                }
            }

            i = j;
        }

        return write;
    }
};
