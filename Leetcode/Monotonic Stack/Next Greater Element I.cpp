class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int size = nums2.size();
        vector<int> greaters(size, -1);
        stack<int> s;

        map<int, int> greatersMap; 


        for (int i = size - 1; i >= 0; i--) {

            while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }

            if (s.empty()) {
                greaters[i] = -1;
            } else {
                greaters[i] = s.top();
            }

            s.push(nums2[i]);
        }

        for(int i=0; i<size; i++)
        {
            greatersMap[nums2[i]] = greaters[i];
        }

        vector<int> ans(nums1.size());
        for(int i=0; i<nums1.size(); i++)
        {
            ans[i] = greatersMap[nums1[i]]; 
        }
        return ans;
    }
};







