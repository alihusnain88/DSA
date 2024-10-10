class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1)
        {
            return 0;
        }

        int size = nums.size();
        int left = 0, right = 0;
        int ans = 0; 
        int product = 1;
        
        while(right < size)
        {
            product *= nums[right];
            while(product >= k)
            {
                product /= nums[left];
                left++;
            }
            ans += right-left+1;
            right ++;
        }
        return ans;
    }
};