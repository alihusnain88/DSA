class Solution {
public:
    long long minimumSteps(string s) {
        int size = s.size();
        long long count = 0;
        int nextZero = 0;
        int iterator;
        for(iterator = 0; iterator < size; iterator++)
        {
            if(s[iterator] == '0')
            {
                count += iterator - nextZero;
                nextZero++;
            }
        }
        return count;
    }
};