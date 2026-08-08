class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        int k = -1;
        for(int i = 0; i < n; i++)
        {
        bool flag = false;
            for(int j = k+1; j < m; j++)
            {
                if(s[i] == t[j]){
                    flag = true;
                    k = j;
                    break;
                } 
            }
        if(flag == false){
                    return false;
                } 
        }
        return true;
    }
};