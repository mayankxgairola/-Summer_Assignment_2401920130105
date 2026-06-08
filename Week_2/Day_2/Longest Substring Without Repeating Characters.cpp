class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        unordered_map<int,int> mpp;
        int i = 0;
        int j = 0;

        while(j < s.size()) {
            if(mpp.find(s[j]) != mpp.end() && i <= mpp[s[j]]) {
                i = mpp[s[j]] + 1;
            }

            maxi = max(maxi, j - i + 1);
            mpp[s[j]] = j;
            j++;
        }
        
        return maxi;
    }
};
