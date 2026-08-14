class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i]) || isdigit(s[i]))
                {
                    temp += tolower(s[i]);
                }
        }
        int i = 0;
        int j = temp.length()-1;
        while(i <= j){
            if(temp[i] != temp[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};