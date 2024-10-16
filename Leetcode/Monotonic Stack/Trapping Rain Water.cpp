class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        stack<int> stk;
        vector<int> nextMaxs = height; // Initializing all with current height
        vector<int> prevMaxs = height; // Initializing all with current height

        // Finding next greater elements in the array for all indices

        // Push all elements in stack first
        for(int i=0; i<size; i++)
        {
            stk.push(i); 
        }
        
        while(!stk.empty())
        {
            int curr = stk.top();
            stk.pop();

            // Top of the stack is the next maximum of all the elements
            // less than and below this element in the stack
                while(!stk.empty() && height[stk.top()] < height[curr])
                {
                    nextMaxs[stk.top()] = height[curr];
                    stk.pop();
                }
        }
        
        // Finding previous greater elements in the array for all indices

        // Push all elements in stack again but now in reverse order        
        for(int i=size-1; i>=0; i--)
        {
            stk.push(i);
        }
        while(!stk.empty())
        {
            int curr = stk.top();
            stk.pop();

            // Top of the stack is the next maximum of all the elements
            // less than and below this element in the stack 
            while(!stk.empty() && height[stk.top()] < height[curr])
            {
                prevMaxs[stk.top()] = height[curr];
                stk.pop();
            }
        }
        int count = 0;
        for(int i=0; i<size; i++)
        {
            // Trapped water for an index is calculated as 
            // (minimum height between next and previous heights for an index)
            // minus (current height)
            int lowerMax = min(nextMaxs[i], prevMaxs[i]);
            count += lowerMax - height[i];
        }
        return count;
    }
};


