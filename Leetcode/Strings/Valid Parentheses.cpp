class Solution {
public:
    bool isValid(string s) {
        if(s == "")
        {
            return true;
        }
        int size = s.size();
        stack<char> stk;
        for(char ch:s)
        {
            if(ch == '(' || ch == '[' || ch == '{')
            {
                stk.push(ch);
            }
            else
            {
                if(stk.empty())
                {
                    return false;
                }
                if(ch == ')' && stk.top() != '(')
                {
                    return false;
                }
                else if(ch == ']' && stk.top() != '[')
                {
                    return false;
                }
                else if(ch == '}' && stk.top() != '{')
                {
                    return false;
                }
                stk.pop();
            }
        }
        return stk.empty();
    }
};