class Solution {
public:
    bool checkString(string s) {
        int a = 0;
        int b = INT_MAX;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a') {
                a = i;
            }
        }
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'b') {
                b = i;
                break;
            }
        }
        if(a <= b) {
            return true;
        }
        else{
            return false;
        }
    }
};