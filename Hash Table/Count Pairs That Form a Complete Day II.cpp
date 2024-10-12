class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        
       long long counts[24] = {};
        for(auto &t : hours)
            ++counts[t % 24];
        
        long long ans = 0;
        for(int i = 1; i < 12; ++i)
            ans += counts[i]*counts[24-i];

        ans += (counts[0]*(counts[0]-1)/2);
        ans += (counts[12]*(counts[12]-1)/2);

        return ans;
    }

    // ----- Mine got 711 / 714 testcases passed -----
    // long long countCompleteDayPairs(vector<int>& hours) {
    //     int size = hours.size();
    //     int multiplesCount = 0;
    //     int ans = 0;
    //     unordered_map<int, int> mp;
    //     int mapsize = 0;
    //     for(int i=0; i<size; i++)
    //     {
    //         if(hours[i]%24 == 0)
    //         {
    //             ans += multiplesCount;
    //             multiplesCount++;
    //         }
    //         else
    //         {

    //             for(auto &it:mp)
    //             {
    //                 if((it.first + hours[i]) % 24 == 0)
    //                 {
    //                     ans += it.second;
    //                 }
    //             }
    //             mp[hours[i]]++;
    //         }
    //     }
    //     return ans;
    // }
};