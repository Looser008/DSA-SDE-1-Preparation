class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        long long ans = 0;
        int i = 0;
        int sign = 1;
        while (i < n && s[i] == ' '){
            i++;
        }
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-')
            {
                sign = -1;
            }
            i++;
        }
        while (i < n) {
            if(isdigit(s[i])) {
                //convert char into digit
                int digit = s[i] - '0';
                ans = ans * 10 + digit;
                if(sign*ans < INT_MIN){
                    return INT_MIN;
                }
                if(sign*ans > INT_MAX){
                    return INT_MAX;
                }
                i++;
            }
            else{
                break;
            }
        }
        return sign * ans;
    }
};

