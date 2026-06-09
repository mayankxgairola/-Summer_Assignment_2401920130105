class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v(26, 0);
        int ct = 0;

        for(int i = 0; i < s1.size(); i++) {
            if(v[s1[i] - 'a'] == 0) ct++;
            v[s1[i] - 'a']++;
        }

        int i = 0, j = 0;
        while(j < s2.size()) {
            if(v[s2[j] - 'a'] > 0) {
                v[s2[j] - 'a']--;
                if(v[s2[j] - 'a'] == 0) ct--;

                if(ct == 0) return true;

                j++;
            } else {
                if(i == j) {
                    i++, j++;
                } else {
                    v[s2[i] - 'a']++;
                    if(v[s2[i] - 'a'] == 1) ct++;

                    i++;
                }
            }
        }

        return false;
    }
};
