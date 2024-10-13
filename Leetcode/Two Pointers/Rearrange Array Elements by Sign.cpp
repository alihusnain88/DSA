class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector <int> positives;
        vector <int> negatives;

        for(int i=0; i<size; i++)
        {
            if(nums[i] > 0)
            {
                positives.push_back(nums[i]);
            }
            else if(nums[i] < 0)
            {
                negatives.push_back(nums[i]);
            }
        }
        int j=0;
        int k=0;
        for(int i=0; i<size; i++)
        {
            if(i==0 || i%2==0)                       
            {
                nums[i] = positives[k];
                k++;
            }
            else if(i%2 != 0)
            {
                nums[i] = negatives[j];
                j++;
            }
        }
        return nums;

    }
};