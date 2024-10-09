class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Gemini
       
        int m = nums1.size(), n = nums2.size();
        if (m > n) {
            swap(nums1, nums2);
            swap(m, n);
        }

        int lo = 0, hi = m;
        while (lo <= hi) {
            int partitionX = lo + (hi - lo) / 2;
            int partitionY = (m + n + 1) / 2 - partitionX;

            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];
            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];

            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                if ((m + n) % 2 == 0) {
                    return (double)(max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
                } else {
                    return (double)(max(maxLeftX, maxLeftY));
                }
            } else if (maxLeftX > minRightY) {
                hi = partitionX - 1;
            } else {
                lo = partitionX + 1;
            }
        }

        return 0.0; // This line should never be reached
    

    // My Code (Needs to be improved)
        // int i=0, j=0;
        // vector<int> ans;
        // while(i<nums1.size() && j<nums2.size())
        // {
        //     if(nums1[i] <= nums2[j])
        //     {
        //         ans.push_back(nums1[i]);
        //         i++;
        //     }
        //     else if(nums1[i] > nums2[j])
        //     {
        //         ans.push_back(nums2[j]);
        //         j++;
        //     }
        // }
        // while(i<nums1.size())
        // {
        //     ans.push_back(nums1[i]);
        //     i++;
        // }
        // while(j<nums2.size())
        // {
        //     ans.push_back(nums2[j]);
        //     j++;
        // }
        // int ansSize = ans.size();
        // if(ansSize % 2 == 0)
        // {
        //     return (double(ans[ansSize/2 - 1]) + double(ans[ansSize/2]) / 2.00);
        // }
        // return double(ans[ansSize/2]);

    }
};