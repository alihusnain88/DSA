class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int size1 = pattern.size();
        int size2 = s.size();
        vector<string> words = getwords(s);
        if(size1 != words.size())
        {
            return false;
        }
        unordered_map<char, string> mp;

        string extra = "";
        for(int i=0; i<size1; i++)
        {
            if(mp[pattern[i]] == "")
            {
                if(extra.contains(words[i]))
                {
                    return false;
                }
                else{
                mp[pattern[i]] = words[i];
                extra += words[i];
                }
            }
            else
            {
                if(mp[pattern[i]] != words[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
    vector<string> getwords(string s)
    {
        vector<string> ans;
        string temp = "";
        for(char ch:s)
        {
            if(ch != ' ')
            {
                temp += ch;
            }
            else
            {
                ans.push_back(temp);
                temp = "";
            }
        }
        ans.push_back(temp);
        return ans;
    }
};