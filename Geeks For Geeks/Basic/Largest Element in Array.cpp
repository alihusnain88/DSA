//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        if(n == 0){ return -1; }
        if(n == 1){ return arr[0];}
        
        int max = largest(arr, n-1);
        if(max >= arr[n-1]){ 
            return max;
        }
        else
        {
            return arr[n-1];
        }
    }
};