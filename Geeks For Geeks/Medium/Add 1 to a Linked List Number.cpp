// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
        if(!head)
        {
            return nullptr;
        }
       stack<Node*> s;
       Node* temp = head;
       while(temp)
       {
           s.push(temp);
           temp = temp->next;
       }
       temp = nullptr;
       int carry = 0;
       while(!s.empty())
       {
           temp = s.top();
           s.pop();
           if(temp->data == 9)
           {
               temp->data = 0;
               carry = 1;
           }
           else
           {
               temp->data++;
               carry = 0;
               break;
           }
       }
       if(carry)
       {
           Node* newNode = new Node(1);
           newNode->next = head;
           head = newNode;
       }
       return head;
    }
};