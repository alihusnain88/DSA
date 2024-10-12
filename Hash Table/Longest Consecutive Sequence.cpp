class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size();
        if(size == 0)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        // priority_queue<int> pq;
        int count = 1;
        int max = 1;
        for(int i=0; i<size-1; i++)
        {
            if(nums[i]==nums[i+1]-1 || nums[i]==nums[i+1])
            {
                count++;
                if(nums[i]==nums[i+1])
                {
                    count--;
                }
                if(count > max)
                {
                    max = count;
                }
            }
            else
            {
                count = 1;
            }
        }
        return max;
        
    } 
};