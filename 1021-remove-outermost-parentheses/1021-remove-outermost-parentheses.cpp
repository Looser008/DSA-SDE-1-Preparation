class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char> st;
        int j = 1;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                st.push(s[i]);
            }
            else if(s[i] == ')') {
                st.pop();
                if(st.empty()) {
                    while(j < i) {
                        ans += s[j];
                        j++;
                    }
                    j += 2;
                }
            }
        }
        return ans;
    }
};