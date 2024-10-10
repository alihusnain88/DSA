class Solution {
public:
    int numberOfSubstrings(string s) {
        int size = s.size();
        int i=0, j=0;
        int count = 0;
        int ans = 0;
        unordered_map<char, int> m;
        m['a']++;
        m['b']++;
        m['c']++;
        int k = 3;

        while(j < size)
        {
            if(--m[s[j]] >= 0)
            {
                count++;
            }
            // if(count == k)
            // {
            //     ans += (size-1)-j+1;
            // }
            while(count == k)
            {
                if(++m[s[i]] == 1)
                {
                    count--;
                }
                ans += size-j;
                i++;
            }
            
            j++;

        }
        return ans;
    }
};