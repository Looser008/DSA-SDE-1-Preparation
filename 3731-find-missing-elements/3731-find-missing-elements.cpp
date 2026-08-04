class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int i = nums[0];
        int j = nums[nums.size()-1];
        while(i < j)
        {
            bool flag = false;
            for(int temp = 0; temp < nums.size(); temp++)
            {
                if(i == nums[temp]){
                    flag = true;
                }
            }
            if(flag == false){
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};