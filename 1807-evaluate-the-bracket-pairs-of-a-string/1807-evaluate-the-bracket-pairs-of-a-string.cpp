class Solution {
public:
    string evaluate(string s, vector<vector<string>>& nums) {
        unordered_map<string,string> map;
        for(int i = 0; i < nums.size(); i++) {
            map[nums[i][0]] = nums[i][1];
        }
        // for(auto itr = map.begin(); itr != map.end(); itr++)
        // {
        //     cout<<itr->first<<"  "<<itr->second<<endl;
        // }
        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '(')
            {
                int j = i+1;
                string temp = "";
                while(s[j] != ')')
                {
                    temp += s[j];
                    j++;
                }
               if (map.find(temp) != map.end())
                    s.replace(i, j - i + 1, map[temp]);
                else
                    s.replace(i, j - i + 1, "?");
            }
        }
        return s;
    }
};