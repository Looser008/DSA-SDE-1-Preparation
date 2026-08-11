class Solution {
public:
    double myPow(double x, int n) {
        // This is the recursive way using binary 
        // exponentiaton
        long long N = n;
        if(n < 0)
        {
            x = 1 / x;
            N = -N;
        }
        if(n == 0){
            return 1;
        }
        double result = myPow(x, N/2);
        
        double ans = result * result;

        if(N % 2 == 1){
            return x * ans;
        }
        return ans;
    }
};