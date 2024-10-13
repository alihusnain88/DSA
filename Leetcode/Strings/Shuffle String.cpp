class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        int size = indices.size();

        string answer(size, ' ');
        for (int i = 0; i < size; i++)
        {
            answer[indices[i]] = s[i];
        }
        return answer;
    }
};