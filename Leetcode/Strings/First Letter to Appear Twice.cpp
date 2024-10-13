class Solution {
public:
    char repeatedCharacter(string s) {
        int size = s.length();
        int i;
        int j;
        for(i=1; i<size; i++)
        {
            for(j=0; j<i; j++)
            {
                if(s[j] == s[i])
                {
                    return s[i];
                    // break;
                }
            }
        }
        return '\0';
    }
};