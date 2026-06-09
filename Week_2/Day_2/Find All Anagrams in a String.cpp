class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        vector<int> res;
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

                if(ct == 0) {
                    res.push_back(i);

                    v[s2[i] - 'a']++;
                    if(v[s2[i] - 'a'] == 1) ct++;

                    i++;
                }

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

        return res;
    }
};
