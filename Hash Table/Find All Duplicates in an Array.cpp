class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int size = nums.size();
        vector<int> result;
       vector<int> frequency(size+1);


       for(int i=0; i<size; i++){
        frequency[nums[i]]++;
       }
       for(int i=0; i<size+1; i++){
        if(frequency[i]>1){
            result.push_back(i);
        }
       }
       return result;       
        
    }
};