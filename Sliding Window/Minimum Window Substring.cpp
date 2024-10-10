class Solution {
public:
    string minWindow(string s, string t) {
        int k = t.size();
        int size = s.size();
        int count = 0;
        int i = 0, j = 0;
        int start = 0, minLength = INT_MAX;

        unordered_map<char, int> m;
        for (char ch : t) {
            m[ch]++;
        }

        while (j < size) {
            if (m.find(s[j]) != m.end()) {
                if (--m[s[j]] >= 0) {
                    count++;
                }
            }
            while (count == k) {
                if (m.find(s[i]) != m.end()) {
                    if (++m[s[i]] > 0) {
                        count--;
                    }
                }
                if (j - i + 1 < minLength) {
                    minLength = j - i + 1;
                    start = i;
                }
                i++;
            }
            j++;
        }

        return minLength == INT_MAX ? "" : s.substr(start, minLength);
    }
};