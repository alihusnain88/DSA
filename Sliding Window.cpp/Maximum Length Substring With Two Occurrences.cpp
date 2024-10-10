class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> freq;
        int left = 0, right = 0;
        int size = s.size();
        int maxLen = 0;
        while(right < size)
        {
            freq[s[right]]++;
            while(freq[s[right]]>2)
            {
                freq[s[left]]--;
                left++;
            }
            int currLen = right - left + 1;
            maxLen = max(maxLen, currLen);
            right ++;
        }
        return maxLen;
    }
};