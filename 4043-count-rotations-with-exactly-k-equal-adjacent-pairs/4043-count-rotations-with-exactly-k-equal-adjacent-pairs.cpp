class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length();
        int ind = n;
        int ans = 0;
        while(ind--)
        {
            char ch = s[0];
            s.erase(0,1);
            s.push_back(ch);
            int score = 0;
            int i = 0;
            while(i < n-1)
            {
                if(s[i] == s[i+1])
                {
                    score++;
                }
                i++;
            }
            if(score == k)
            {
                ans++;
            }
        }
        return ans;
    }
};