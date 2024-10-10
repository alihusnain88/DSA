class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> m;
        int i=0, j=0;
        int maxFruits = 0;
        while(j < fruits.size())
        {
            m[fruits[j]]++;
            if(m.size() == 2)
            {
                maxFruits = max(maxFruits, j-i +1);
            }
            while(m.size() > 2)
            {
                m[fruits[i]]--;
                if(m[fruits[i]] == 0)
                {
                    m.erase(fruits[i]);
                }
                i++;
            }
            // maxFruits = max(maxFruits, j-i +1);
            maxFruits = max(maxFruits, j-i +1);
            j++;
        }
        return maxFruits;
    }
};