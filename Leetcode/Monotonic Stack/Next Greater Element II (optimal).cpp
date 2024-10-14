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

        // For those elements whose next greater is not next to them in linear array, 
        // infact it is somewhere behind them in array, so we have to check the array in circular manner
        int i=0;
        while(stk.size() > 1 && i < size)
        {
            while(nums[stk.top()] < nums[i])
            {
                ans[stk.top()] = nums[i];
                stk.pop();
            }
            i++;
        }
        return ans;
    }
};

