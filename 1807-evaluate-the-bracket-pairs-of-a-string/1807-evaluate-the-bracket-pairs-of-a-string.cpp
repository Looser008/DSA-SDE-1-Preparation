class Solution {
public:
    // This is using an extra space
    string evaluate(string s, vector<vector<string>>& nums) {
        unordered_map<string,string> map;
        for(int i = 0; i < nums.size(); i++) {
            map[nums[i][0]] = nums[i][1];
        }
        string ans = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                string temp = "";
                int j = i+1;
                while(s[j] != ')') {
                    temp += s[j];
                    j++;
                }
                if(map.find(temp) == map.end()){
                    ans += '?';
                }
                else{
                    ans += map[temp];
                }
                i = j;
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};