class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        int i = 0;
        while(i < t.length()) {
            if(s[i] != t[i]) {
                return t[i];
            }
            i++;
        }
        return 'a';
    }
};