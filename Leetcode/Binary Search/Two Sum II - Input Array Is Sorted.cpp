class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        int left = 0, right = size-1;
        vector<int> ans;
        while(left < right)
        {
            if((nums[left] + nums[right]) == target)
            {
                ans.push_back(left + 1);
                ans.push_back(right + 1);
                break;
            }
            if((nums[left] + nums[right]) > target)
            {
                right--;
            }
            else if((nums[left] + nums[right]) < target)
            {
                left++;
            }
        }
        return ans;
    }
};