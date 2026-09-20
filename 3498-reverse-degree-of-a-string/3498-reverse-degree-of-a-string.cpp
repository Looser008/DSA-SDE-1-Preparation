class Solution {
public:
    int reverseDegree(string s) {
        // Without Using Space Solution
        // O(n)-->time complexity
        // O(1)--> Space Complexity

        int ans = 0;
        for(int i = 1; i <= s.length(); i++)
        {
            ans = ans + (26 - (s[i-1] - 'a')) * (i);
        }
        return ans;
    }
};