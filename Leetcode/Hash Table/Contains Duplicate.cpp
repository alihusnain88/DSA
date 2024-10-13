class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=1; i<size; i++)
        {
            if(nums[i] == nums[i-1])
            {
                return true;
            }
        }
        return false;
        //------------------------------------
        // int size = nums.size();
        // priority_queue<int> pq;
        // for(int i=0; i<size; i++)
        // {
        //     pq.push(nums[i]);
        // }
        // for(int i=0; i<size-1; i++)
        // {
        //     int temp = pq.top();
        //     pq.pop();
        //     if(temp == pq.top())
        //     {
        //         return true;
        //     }
        // }
        // return false;
        //------------------------------------
    }
};