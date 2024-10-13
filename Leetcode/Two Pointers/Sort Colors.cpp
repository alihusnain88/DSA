class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();

        priority_queue<int> pq;
        for(int i=0; i<size; i++)
        {
            pq.push(nums[i]);
        }
        for(int i=size-1; i>=0; i--)
        {
            nums[i] = pq.top();
            pq.pop();
        }
       
    }
};