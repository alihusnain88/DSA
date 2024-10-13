class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int wordssize = words.size();
        int charssize = chars.size();
        int ans = 0;
        for(int i=0; i<wordssize; i++)
        {
            sort(words[i].begin(), words[i].end());
        }
        sort(chars.begin(), chars.end());
        int index=0;
        for(int i=0; i<wordssize; i++)
        {
           int index = 0;
           int charsindex = 0;
           while(index<words[i].size() && charsindex<charssize)
           {
            if(words[i][index] == chars[charsindex])
            {
                index++;
            }
            charsindex++;
           }
           if(index == words[i].size())
           {
            ans += words[i].size();
           }
            
        }
        return ans;

    }
};