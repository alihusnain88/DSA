class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int size = nums.size();
        int iterator = 2;
        int count = 0;
        int ans = 0;
        while (iterator < size) {
            if (nums[iterator] - nums[iterator - 1] ==
                nums[iterator - 1] - nums[iterator - 2]) {
                count++;
                ans += count;
            }
            else
            {
                count = 0;
            }
            iterator ++;
        }
        return ans;
    }
};