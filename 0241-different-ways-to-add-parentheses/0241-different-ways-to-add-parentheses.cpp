class Solution {
public:
    vector<int> solve(string s) {
        vector<int> ans;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*') {
                vector<int> left_res = solve(s.substr(0, i));
                vector<int> right_res = solve(s.substr(i + 1));
                for (int x : left_res) {
                    for (int y : right_res) {
                        if (s[i] == '+') {
                            ans.push_back(x + y);
                        } else if (s[i] == '-') {
                            ans.push_back(x - y);
                        } else {
                            ans.push_back(x * y);
                        }
                    }
                }
            }
        }
            if (ans.size() == 0) {
                ans.push_back(stoi(s));
            }
            return ans;
    }
    vector<int> diffWaysToCompute(string s) { return solve(s); }
};