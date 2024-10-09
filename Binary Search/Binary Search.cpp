class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int start = 0;
        int end = size-1;
        int middle;
        while(start <= end)
        {
            middle = (start+end)/2;
            if(target == nums[middle])
            {
                return middle;
            }
            else if(target > nums[middle])
            {
                start = middle+1;
            }
            else if(target < nums[middle])
            {
                end = middle-1;
            }

        }
        return -1;
        
    }
};