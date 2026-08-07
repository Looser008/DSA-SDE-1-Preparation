class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        string temp = to_string(x);
        long long ans = 0;
        if(temp[0] == '-')
        {
            sign = -1;
            temp.erase(0,1);
        }
        int i = temp.length()-1;
        while(i >= 0){
            int digit = temp[i] - '0';
            ans = ans * 10 + digit;
            if(sign*ans > INT_MAX || sign*ans < INT_MIN){
                return 0;
            }
            i--;
        }
        return sign * ans;
    }
};