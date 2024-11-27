class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;
        unordered_map<int, int> map;
        for(int i:nums)
        {
            map[i]++;
        }
        for(int i=1; i<=size; i++)
        {
            if(!map[i])
            {
                ans.push_back(i);
            }
        }
        return ans;

    }
};
