class Solution {
public:
    char findTheDifference(string s, string t) {
        //Using map
        unordered_map <char, int> origOccurrence;
        unordered_map <char, int> currOccurrence;
        for(char ch:s)
        {
            origOccurrence[ch]++;
        }
        for(char ch:t)
        {
            currOccurrence[ch]++;
        }
        for(char ch:t)
        {
            if(currOccurrence[ch] > origOccurrence[ch])
            {
                return ch;
            }
        }
        return '\0';
    }
};