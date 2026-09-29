class Solution {
public:
    char findTheDifference(string s, string t) {
        /// Doing it using hashmap method

        /*
        store all the values in map
        retrieve that value whose count is one
        */

        unordered_map<char, int> map;

        for(int i = 0; i < s.length(); i++) {
            map[s[i]]++;
        }

        for(int i = 0; i < t.length(); i++) {
            map[t[i]]--;
            if(map[t[i]] < 0)
            {
                return t[i];
            }
        }
        return 'a';
    }
};