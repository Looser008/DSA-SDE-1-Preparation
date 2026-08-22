class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int digit_sum = 0;
        int digit_prod = 1;
        string s = to_string(n);
        for(int i = 0; i < s.length(); i++){
            char ch = s[i] - '0';
            int val = 0;
            val = val * 10 + ch;
            digit_sum += val;
            digit_prod = digit_prod * val;
        }
        sum = digit_sum + digit_prod;
        if(n % sum == 0){
            return 1;
        }
        return 0;
    }
};