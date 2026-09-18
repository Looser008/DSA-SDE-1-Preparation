class Solution {
public:
    string ans = "";
    string invert(string temp) 
    {
        for(int i = 0; i < temp.length(); i++) 
        {
            if(temp[i] == '0'){
                temp[i] = '1';
            }
            else
            {
                temp[i] = '0';
            }
        }
        return temp;
    }
    string solve(string ans) {
        string temp = ans;
        string inv_str = invert(temp);
        reverse(inv_str.begin(), inv_str.end());
        string s = temp + '1' + inv_str;
        return s;
    }
    char findKthBit(int n, int k) {
        ans = ans + '0';
        while(n !=1 ) {
            ans = solve(ans);
            n--;
        }
        return ans[k-1];
    }
};