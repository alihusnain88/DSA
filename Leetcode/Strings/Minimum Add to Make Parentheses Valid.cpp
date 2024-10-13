class Solution {
public:
    int minAddToMakeValid(string s) {
        int size = s.size();
        stack<char> stk;
        for(char ch:s)
        {
            if(!stk.empty() && stk.top() == '(' && ch == ')')
            {
                stk.pop();
                continue;
            }
            stk.push(ch);
        }
        return stk.size();
    }
};