class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size = nums.size();
        int count = size/2;
        unordered_map<int, int> mp;
        for(int i=0; i<size; i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] == count)
            {
                return nums[i];
            }
        }
        return -1;
    }
};