class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        // sort(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        cout<<mini<<endl;
        // int max = nums[n-1];
        for(int i = 0; i < nums.size(); i++) {
            ans = ans + (nums[i]-mini);
        }
        return ans;
    }
};