class Solution {
public:
// This is the recursion soln
    int findindx(int n, int k){
        if(n == 1){
            return 0;
        }
       int indx = findindx(n-1,k);
       indx = (indx + k)%n;
       return indx;
    }
    int findTheWinner(int n, int k) {
        int ans  = findindx(n,k);
        return ans + 1;
    }
};