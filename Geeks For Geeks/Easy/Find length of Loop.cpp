/*

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
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        int index = 1;
        map<Node*, int> mp;
        Node* temp = head;
        while(temp)
        {
            mp[temp] = index++;
            if(mp[temp->next])
            {
                int last = mp[temp];
                int cycle = mp[temp->next];
                return (last-cycle) + 1;
                // return (mp[temp] - mp[temp-next] +1);
            }
            temp = temp->next;
        }
        return 0;
    }
};