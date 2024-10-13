#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaters(const vector<int> &arr);
void print(const vector<int> &arr);
int main()
{
    vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> ans = nextGreaters(arr);
    print(ans);

    return 0;
}

vector<int> nextGreaters(const vector<int> &arr)
{
    int size = arr.size();
    vector<int> ans(size, -1); // Initialize all elements in 'ans' to -1 (default for missing next greater element)

    stack<int> s;

    // Iterate from right to left (as the next greater element is on the right)
    for (int i = size - 1; i >= 0; i--)
    {
        // Process elements in the stack until a greater element is found or the stack is empty
        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }

        // If the stack is empty, no greater element exists
        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top(); // Store the next greater element
        }

        // Push the current element onto the stack for comparison with future elements
        s.push(arr[i]);
    }

    return ans;
}

void print(const vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

