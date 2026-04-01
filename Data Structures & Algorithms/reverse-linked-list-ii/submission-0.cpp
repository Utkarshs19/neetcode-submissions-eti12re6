/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* helper(ListNode* head,int k,int left,int right)
    {
        ListNode* t=head;
        ListNode* p=nullptr;
        while(k<left)
        {
            p=t;
            t=t->next;
            k++;
        }
        ListNode* cur=t;
        ListNode* prev=nullptr;
        ListNode* temp=nullptr;

        while(cur && k<=right)
        {
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
            k++;
        }
        if (p) {
            p->next = prev;
        } else {
            head = prev;   // left == 1 case
        }
        t->next=cur;

        return head;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(!head)return nullptr;

        return helper(head,1,left,right);

    }
};