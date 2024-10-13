class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        int duplicate, missing;
        unordered_map<int, int> mp;
        for(int i:nums)
        {
            mp[i]++;
        }

        for(auto &it:mp)
        {
           if(it.second == 2)
           {
           duplicate = it.first;
           break;
           }
        }
        for(int i=1; i<=size; i++)
        {
            if(!mp[i])
            {
                missing = i;
            }
        }
        ans.push_back(duplicate);
        ans.push_back(missing);

        return ans;
    }
};