class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int i=0, j=1;
        for(int k=1; k<size; k++)
        {
            // int j = i+1;
            if(nums[i]!=nums[k])
            {
                nums[j] = nums[k];
                i = j;
                j++;
            }
        }
        return j;
       
    }
};