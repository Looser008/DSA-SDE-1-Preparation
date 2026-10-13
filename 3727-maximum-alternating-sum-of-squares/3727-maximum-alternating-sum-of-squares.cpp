class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = pow(nums[i], 2);
            cout<<nums[i]<<endl;
        }
        sort(nums.begin(), nums.end());
        long long first = 0;
        long long second = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i < nums.size()/2) {
                first = first + nums[i];
            }
            else {
                second += nums[i];
            }
        }
        ans = second - first;
        return ans;
    }
};