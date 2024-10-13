class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int size = words.size();
        vector<string> ans;
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(i == j)
                 continue; 

                 if(words[j].contains(words[i]))
                 {
                    ans.push_back(words[i]);
                    break;
                 }
            }
        }
        return ans;
    }
};