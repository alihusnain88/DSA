#include <bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(vector<int>, int, int, int);

int main()
{
    vector<int> arr;
    cout << "Enter array elements(sorted) ->(-1 to stop):\n";
    int input;
    while (input != -1)
    {
        cin >> input;
        if (input != -1)
            arr.push_back(input);
    }

    cout << "Enter key to search for:\n";
    int key;
    cin >> key;

    int index = recursiveBinarySearch(arr, 0, arr.size(), key);
    if (index != -1)
    {
        cout << "Key found at index " << index << endl;
    }
    else
    {
        cout << "Key not found!\n";
    }

    return 0;
}


int recursiveBinarySearch(vector<int> arr, int low, int high, int key)
{
    int mid = (low + high) / 2;
    if (low <= high)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            return recursiveBinarySearch(arr, low, mid - 1, key);
        }
        else
        {
            return recursiveBinarySearch(arr, mid + 1, high, key);
        }
    }
    return -1;
}