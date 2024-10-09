class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int size = nums.size();
        vector<int> ans;
        for(int i=0; i<size; i++)
        {
            for(int j=i; j<size; j++)
            {
                int indexdiff = abs(i - j);
                int valuediff = abs(nums[i] - nums[j]);
                if(indexdiff >= indexDifference && valuediff >= valueDifference)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        if(ans.size() == 0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};