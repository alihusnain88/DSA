class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int size1 = s.size();
        int size2 = t.size();

        stack<char> s1;
        stack<char> s2;

        for(char ch:s)
        {
            if(ch == '#')
            {
                if(!s1.empty())
                s1.pop();
            }
            else
            {
                s1.push(ch);
            }
        }
        for(char ch:t)
        {
            if(ch == '#')
            {
                if(!s2.empty())
                s2.pop();
            }
            else
            {
                s2.push(ch);
            }
        }
        string result1 = "";
        string result2 = "";
        while(!s1.empty())
        {
            result1 += s1.top();
            s1.pop();
        }
        while(!s2.empty())
        {
            result2 += s2.top();
            s2.pop();
        }
        return (result1 == result2);
    }
};