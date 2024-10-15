
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int size = prices.size();
        vector<int> discounts(size, 0);
        stack<int> stk;
        for(int i=0; i<size; i++)
        {
            while(!stk.empty() && prices[stk.top()] >= prices[i])
            {
                discounts[stk.top()] = prices[i];
                stk.pop();
            }
            stk.push(i);
        }
        for(int i=0; i<size; i++)
        {
            discounts[i] = prices[i] - discounts[i];
        }
        return discounts;
    }
};