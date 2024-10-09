class Solution {
public:
    string reverseStr(string s, int k) {
        int size = s.size();
        int first = 0;
        int last = k-1;
        while(first < size)
        {
            if(last > size-1)
            {
                reverse(s.begin()+first, s.end());
            }
            else 
            {
                reverse(s.begin()+first, s.begin()+ last+1);
            }
            first = first+(2*k);
            last = first + k -1;
        }
        return s;
        
    }
};