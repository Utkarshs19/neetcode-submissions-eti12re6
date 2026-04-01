/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:
    Node* insert(Node* head, int insertVal) {

        if(!head)
        {
            Node* temp=new Node(insertVal);
            temp->next=temp;
            return temp;
        }

        Node* cur=head;

        while(true)
        {
            if(cur->val<=insertVal && insertVal<=cur->next->val)break;

            if(cur->val>cur->next->val)
            {
                if(insertVal>=cur->val || insertVal<=cur->next->val)break;
            }

            cur=cur->next;
            if(cur==head)break;
        }

        Node* temp=new Node(insertVal);
        temp->next=cur->next;
        cur->next=temp;

        return head;
        
    }
};
