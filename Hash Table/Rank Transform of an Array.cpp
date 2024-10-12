class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> copy = arr;
        sort(copy.begin(), copy.end());
        int size = arr.size();

        int rank = 1, curr = INT_MIN;
        unordered_map<int, int> m;
        for(int i=0; i<size; i++)
        {
            if(copy[i] != curr)
            {
                m[copy[i]] = rank;
                rank++;
                curr = copy[i];
            }
        }
        for(int i=0; i<size; i++)
        {
            arr[i] = m[arr[i]];
        }
        return arr;
    }
};

