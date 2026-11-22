class Solution {
public:
    bool checkString(string s) {
        // kyuki all a's before all b's ka matlab hai string will always be sorted
        return is_sorted(s.begin(), s.end());
    }
};