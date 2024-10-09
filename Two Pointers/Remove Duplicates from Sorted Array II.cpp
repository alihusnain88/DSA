class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int> mp;
        int left=0, right=0;
        for(right=0; right<size; right++)
        {
            mp[nums[right]]++;
            if(mp[nums[right]] < 3)
            {
                swap(nums[left], nums[right]);
                left++;
            }
            else
            {
                nums[right] = -1;
            }
        }
        return left;
    }
};