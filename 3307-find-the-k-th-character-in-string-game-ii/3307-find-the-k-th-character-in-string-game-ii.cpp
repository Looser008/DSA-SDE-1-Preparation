class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        // base case
        if(k == 1) {
            return 'a';
        }

        long long len = 1;
        long long newk;
        int val;
        for(int i = 0; i < operations.size(); i++)
        {
            len = len * 2;
            if(len >= k) {
                val = operations[i];
                newk = k - len/2;
                break;
            }
        }
        char ch = kthCharacter(newk,operations);
        if(val == 0)
        {
            return ch;
        }
        else{
            if(ch == 'z'){
                return 'a';
            }
            return ch + 1;
        }
    }
};