// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        int size = arr.size();
        int i = 0;
        int max = arr[0];
        while(arr[i+1]==max)
        {
            i++;
        }
        i++;
        int sec;
        if(arr[i]>max)
        {
            sec = max;
            max = arr[i];
        }
        else
        {
            sec = arr[i];
        }
        for(int j=2; j<size; j++)
        {
            if(arr[j] > max)
            {
                sec = max;
                max = arr[j];
            }
            else if(arr[j]>sec && arr[j]<max)
            {
                sec = arr[j];
            }
        }
        return sec;
        
    }
};