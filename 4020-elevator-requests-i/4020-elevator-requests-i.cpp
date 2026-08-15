class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int m = requests.size();
        int ans = 0;
        ans = ans + requests[0];
        for(int i = 1; i<m; i++)
        {
            int diff = requests[i] - requests[i-1];
            if(diff < 0)
            {
                diff = diff * (-1);
            }
            ans =  ans + diff;
        }
        return ans;
    }
};