class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int size = words.size();
        int count = size;
        bool allowedCharacters[26] = {false};
        for(char ch:allowed)
        {
            allowedCharacters[ch - 'a'] = true;
        }
        for(int i=0; i<size; i++)
        {
            for(char ch:words[i])
            {
                if(!allowedCharacters[ch - 'a'])
                {
                    count--;
                    break;
                }
            }
        }
        return count;            
    }
};