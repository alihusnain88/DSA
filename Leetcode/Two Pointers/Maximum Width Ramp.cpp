class Solution {
public:
   int maxWidthRamp(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<int> temp(n,0);
        int prev=0;
        for(int i=n-1;i>=0;i--){
            temp[i]=max(nums[i],prev);
            prev=temp[i];
        }
        int left=0;
        for(int right=0;right<n;right++){
            while(nums[left]>temp[right]){
                left++;
            }
            ans=max(ans,right-left);
        }
        return ans;
    }
};