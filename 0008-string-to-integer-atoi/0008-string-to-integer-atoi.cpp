class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int ans = 0;
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
                // form the digit to a number
                if(ans > (INT_MAX - digit)/10){
                    if(sign == 1)
                    {
                        return INT_MAX;
                    }
                    else
                    {
                        return INT_MIN;
                    }
                }
                    ans = ans * 10 + digit;
                i++;
            }
            else{
                break;
            }
        }
        return sign * ans;
    }
};

