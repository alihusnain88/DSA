// User function Template for C++

/*class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
    Node* head = nullptr, *tail = nullptr;
        
        int size = arr.size();
        for(int i=0; i<size; i++)
        {
            if(!head)
            {
                head = tail = new Node(arr[i]);
            }
            else
            {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }
        return head;
    }
};