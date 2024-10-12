class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int size1 = arr1.size();
        int size2 = arr2.size();

        int index = 0;
        for(int ref:arr2)
        {
            for(int j=index; j<size1; j++)
            {
                if(arr1[j]==ref)
                {
                    swap(arr1[j], arr1[index]);
                    index++;
                }
            }
        }
        sort(arr1.begin()+index, arr1.end());
        return arr1;
    }
};