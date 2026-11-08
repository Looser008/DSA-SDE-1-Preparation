class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> map;
        for(auto ch : nums) {
            map[ch]++;
        }
        for(auto itr = map.begin(); itr != map.end(); itr++) {
            if(itr->second == 1) {
                ans = itr->first;
            }
        }
        return ans;
    }
};