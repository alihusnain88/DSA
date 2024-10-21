class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector <int> nextWarmerTemps(size, 0);
        stack <int> monotonic;
        for(int curr = 0; curr < size; curr++)
        {
            while(!monotonic.empty() && temperatures[monotonic.top()] < temperatures[curr])
            {
                nextWarmerTemps[monotonic.top()] = curr - monotonic.top();
                monotonic.pop();
            }
            monotonic.push(curr);
        }
        return nextWarmerTemps; 
    }
};
