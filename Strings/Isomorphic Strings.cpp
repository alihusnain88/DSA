
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        int n = s.size();
        vector<char> m1(128, 0), m2(128, 0);

        for (int i = 0; i < n; ++i) {
            char c1 = s[i], c2 = t[i];
            if (m1[c1] == 0 && m2[c2] == 0) {
                m1[c1] = c2;
                m2[c2] = c1;
            } else if (m1[c1] != c2 || m2[c2] != c1) {
                return false;
            }
        }

        return true;
    }
};
