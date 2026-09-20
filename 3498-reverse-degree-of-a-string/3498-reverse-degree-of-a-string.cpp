class Solution {
public:
    int reverseDegree(string s) {
        vector<char> temp;
        for(char a = 'z'; a >= 'a'; a--)
        {
            temp.push_back(a);
        }
        int ans = 0;
        for(int i = 1; i <= s.length(); i++)
        {
            int j = 1;
            while(j <= 26) {
                if(temp[j-1] == s[i-1])
                {
                    break;
                }
                else{
                    j++;
                }
            }
            ans = ans + j * i;
        }
        return ans;
    }
};