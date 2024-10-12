/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
        if(!head || !head->next)
        {
            return head;
        }
        Node* firstZero = nullptr;
        Node* firstOne = nullptr;
        Node* firstTwo = nullptr;
        Node* prevZero = nullptr;
        Node* prevOne = nullptr;
        Node* prevTwo = nullptr;
        Node* temp = head;
        while(temp)
        {
            if(temp->data == 0)
            {
                if(!firstZero)
                {
                    firstZero = temp;
                }
                if(!prevZero)
                {
                    prevZero = temp;
                }
                else
                {
                    prevZero->next = temp;
                    prevZero = temp;
                    // temp = temp->next;
                }
            }
            else if(temp->data == 1)
            {
                if(!firstOne)
                {
                    firstOne = temp;
                }
                if(!prevOne)
                {
                    prevOne = temp;
                }
                else
                {
                    prevOne->next = temp;
                    prevOne = temp;
                    // temp = temp->next;
                }
            }
            else if(temp->data == 2)
            {
                if(!firstTwo)
                {
                    firstTwo = temp;
                }
                if(!prevTwo)
                {
                    prevTwo = temp;
                }
                else
                {
                    prevTwo->next = temp;
                    prevTwo = temp;
                    // temp = temp->next;
                }
            }
            temp = temp->next;
        }
        if(prevZero)
        prevZero->next = firstOne;
        if(prevOne)
        prevOne->next = firstTwo;
        else
        {
            if(prevZero)
            prevZero->next = firstTwo;
        }
        if(prevTwo)
        prevTwo->next = nullptr;
        
        if(firstZero)
        head = firstZero;
        else if(firstOne)
        head = firstOne;
        else if(firstTwo)
        head = firstTwo;
        
        return head;
    }
};