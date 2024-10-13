class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int i = 0;
        int j = size - 1;
        int max=0, area, depth, breadth;
        while(i < j)
        {
            breadth = j - i;
            if(height[i] < height[j])
            { 
              depth = height[i];
              i++;
            }
            else
            { 
                depth = height[j]; 
                j--;
            }

            area = depth * breadth;
            if(area > max){ max = area; }

        }
        return max;
    }
};