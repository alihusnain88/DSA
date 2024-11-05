class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int size = heights.size();
        vector<int> nextSmallers (size, size);
        vector<int> prevSmallers (size, -1);
        stack <int> s;
        for(int i=0; i<size; i++)
        {
            while(!s.empty() && heights[s.top()] > heights[i])
            {
                nextSmallers[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            s.pop();
        }
        for(int i=size-1; i>=0; i--)
        {
            while(!s.empty() && heights[s.top()] > heights[i])
            {
                prevSmallers[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }

        int maxArea = 0;
        for(int i=0; i<size; i++)
        {
            int currArea = (nextSmallers[i] - prevSmallers[i] - 1) * heights[i];
            maxArea = max(currArea, maxArea);
        }
        return maxArea;

    }
};







