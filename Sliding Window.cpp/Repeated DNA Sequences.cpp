class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.length() < 10) {
            return {};  // Return empty vector if string is too short
        }

        unordered_map<string, int> freq;
        vector<string> ans;

        // Generate initial 10-mer
        string temp = s.substr(0, 10);
        freq[temp]++;

        // Slide the window and update frequency
        for (int i = 10; i < s.length(); ++i) {
            temp = temp.substr(1) + s[i];  // Efficiently update the 10-mer
            freq[temp]++;

            // Check for exactly two occurrences
            if (freq[temp] == 2) {
                ans.push_back(temp);
            }
        }

        return ans;
    }
};