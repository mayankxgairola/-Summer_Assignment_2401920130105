class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> st;

        string curr = "";
        int cnt = 0;

        for(char ch : s) {
            if(isdigit(ch)) {
                cnt = cnt * 10 + (ch - '0');
            }
            else if(ch == '[') {
                num.push(cnt);
                st.push(curr);

                cnt = 0;
                curr = "";
            }
            else if(ch == ']') {
                string temp = curr;

                curr = st.top();
                st.pop();

                int k = num.top();
                num.pop();

                while(k--) {
                    curr += temp;
                }
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};
