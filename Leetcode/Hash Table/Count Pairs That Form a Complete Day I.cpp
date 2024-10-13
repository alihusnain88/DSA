class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int size = hours.size();
        int ans = 0;
        for(int i=0; i<size-1; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if((hours[i] + hours[j]) % 24 == 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};