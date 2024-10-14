class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size, -1);
        stack<int> stk;
        for(int curr=0; curr<size; curr++)
        {
            while(!stk.empty() && nums[stk.top()] < nums[curr])
            {
                ans[stk.top()] = nums[curr];
                stk.pop();
            }
            stk.push(curr);
        }
        for(int i=0; i<size; i++)
        {
            while(nums[stk.top()] < nums[i])
            {
                ans[stk.top()] = nums[i];
                stk.pop();
            }
        }
        return ans;
    }
};













































