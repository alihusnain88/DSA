class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int unique = 0;
        int current = 0;
        for(int current=0; current<size; current++){
            if(nums[current]!=val){
                nums[unique]=nums[current];
                unique++;
            }
        }
        return unique;


        
    }
};