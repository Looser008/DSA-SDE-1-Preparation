class Solution {
public:
    string solve(string word, string temp)
    {
        for(int i = 0; i < word.length(); i++)
        {
            if(word[i] == 'z') {
                temp += 'a';
            }
            else{
                temp.push_back(word[i] + 1);
            }
        }
        return temp;
    }
    char kthCharacter(int k) {
        string word = "a";
        while(word.length() <= k) 
        {
            // recursion
            string temp = "";
            temp = solve(word, temp);
            word = word + temp;
        }
        return word[k-1];
    }
};