'class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int size = nums.size();
        long long concatenation = 0;
        int left = 0; int right = size-1;
        while(left < right)
        {
            string strConcatenate;
            strConcatenate += to_string(nums[left]) + to_string(nums[right]);
            concatenation += stoi(strConcatenate);
            left++, right--;
        }
        if(left == right)
        {
            concatenation += nums[left];
        }
        return concatenation;
    }
};'