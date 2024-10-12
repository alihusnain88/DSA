class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {
        int l=0;
        int h=N-1;
        int mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(K == arr[mid])
            {
                return 1;
            }
            else if(K < arr[mid])
            {
                h = mid-1;
            }
            else if(K > arr[mid])
            {
                l = mid +1;
            }
            
        }
            return -1;
    }
};