class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i=0; i<size; i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] == 2)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};