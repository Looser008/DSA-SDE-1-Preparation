class Solution {
public:
    bool areNumbersAscending(string s) {
        int n = s.length();
        vector<int> temp;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                int digit = 0;
                while (i < n && isdigit(s[i])) {
                    digit = digit * 10 + (s[i]-'0');
                    i++;
                }
                temp.push_back(digit);
            }
        }
        for (int i = 1; i < temp.size(); i++) {
            if (temp[i] <= temp[i - 1]) {
                flag = false;
            }
        }
        return flag;
    }
};