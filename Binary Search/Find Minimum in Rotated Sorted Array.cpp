class Solution {
public:
    int findMin(vector<int>& nums) {
      int s = nums.size();
      int lowest = nums[0];

      for(int i=0; i<s-1; i++){
          if(nums[i]>nums[i+1]){
              lowest = nums[i+1];
          }
      }
      if(lowest == nums[0]){
          return nums[0];
      }
      return lowest;        
    }
};