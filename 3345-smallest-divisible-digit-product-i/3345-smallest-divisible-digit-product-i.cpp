class Solution {
public:
    int smallestNumber(int n, int t) {
        while(n <= 100)
        {
            int prod = 1;
            string temp = to_string(n);
            int i = 0;
            while(i < temp.size())
            {
                int num = temp[i]-'0';
                prod = prod*num;
                i++;
            }
            if(prod%t ==0)
            {
                return n;
            }
            n++;
        }
        return 0;
    }
};