class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int size = arr.size();
        int count = 0;
        for(int i=0; i<size-1; i++)
        {
            string temp = arr[i];
            for(int j=i+1; j<size; j++)
            {
                if(arr[j] == temp)
                {
                    arr[i] = "";
                    arr[j] = "";
                }
            }
        }
        for(int i=0; i<size; i++)
        {
            if(arr[i]!="")
            {
                count++;
                if(count == k)
                {
                    return arr[i];
                }
            }
        }
        return "";
    }
};