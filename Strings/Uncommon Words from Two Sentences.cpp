class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       unordered_map<string, int> wordCounts;

    // Process both sentences in a single loop for efficiency
    for (const string& sentence : {s1, s2}) {
        string word;
        for (char ch : sentence) {
            if (ch == ' ') {
                wordCounts[word]++;
                word = "";
            } else {
                word += ch;
            }
        }
        wordCounts[word]++; // Handle the last word
    }

    vector<string> uncommonWords;
    for (const auto& [word, count] : wordCounts) {
        if (count == 1) {
            uncommonWords.push_back(word);
        }
    }

    return uncommonWords;
    }
};