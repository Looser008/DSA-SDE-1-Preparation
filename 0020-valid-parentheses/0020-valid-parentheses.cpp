class Solution {
public:
    char reverse(char val) {
        if(val == ')') {
            return '(';
        }
        else if(val == '}') {
            return '{';
        }
        else{
            return '[';
        }
    }
    bool isValid(string s) {
        stack<char> st;
        if(s.length() == 1)
        {
            return false;
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else {
                if(s[i] == ')' || s[i] == ']' || s[i] == '}')
                {
                    if(st.empty()) {
                        return false;
                    }
                    if(reverse(s[i]) != st.top())
                    {
                        return false;
                    }
                    else{
                        if(!st.empty())
                        {
                            st.pop();
                        }
                    }
                }
            }
        }
        if(!st.empty())
        {
            return false;
        }
        return true;
    }
};