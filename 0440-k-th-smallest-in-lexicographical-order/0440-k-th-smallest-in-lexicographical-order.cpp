class Solution {
public:
    int count_num(long long curr, long long next, long long n)
    {
        long long count = 0;
        while(curr <= n)
        {
            count += (next-curr);
            curr *= 10;
            next *= 10;
            next = min(next, n+1);
        }
        return count;
    }
    int findKthNumber(int n, int k) {
        long long curr = 1;
        k=k-1;
        while(k > 0)
        {
            long long count = count_num(curr, curr+1 , n);
            if(count <= k) {
                curr++;
                k = k - count;
            }
            else {
                curr = curr * 10;
                k = k - 1;
            }
        }
        return curr;
    }
};