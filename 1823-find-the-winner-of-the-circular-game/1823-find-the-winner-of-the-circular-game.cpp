class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> temp;
        int i = 1;
        while(i <= n){
            temp.push_back(i);
            // cout<<temp<<endl;
            i++;
        }
        i = 0;
        while(temp.size() != 1){
            i = (i+k-1)%temp.size();
            temp.erase(temp.begin()+i);
        }
        int ans = temp[0];
        return ans;
    }
};