class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int size = nums.size();
       vector<int> v;
       for(int i=0; i<size; i++)
       {
        if(nums[i] != 0)
        {
            v.push_back(i);
        }
       }
       int j = 0;
       int size2 = v.size();
       for(int i=0; i<size2; i++)
       {
        nums[i] = nums[v[j]];
        j++;         
       }
       for(int i = size2; i<size; i++)
       {
        nums[i] = 0;
       }

    }
};