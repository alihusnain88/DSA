// User function Template for C++

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        int size = arr.size();
        Node* head = nullptr, *tail = nullptr;
        for(int i=0; i<size; i++)
        {
            if(!head)
            {
               head = tail = new Node(arr[i]);
            }
            else
            {
                tail->next = new Node(arr[i]);
                tail->next->prev = tail;
                tail = tail->next;
            }
        }
        return head;
    }
};