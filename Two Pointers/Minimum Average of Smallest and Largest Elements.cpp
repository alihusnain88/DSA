class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<double> averages;

        int left = 0, right = size -1 ;
        for(int i=1; i<=size/2; i++)
        {
            double avg = (nums[left] + nums[right]) / 2.00;
            averages.push_back(avg);
            left++, right--;
        }

        //Finding minimum from averages
        sort(averages.begin(), averages.end());
        return averages[0];
    }
};