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
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head)return nullptr;
        int size=1;

        ListNode* cur=head;
        ListNode* t=head;
        while(t->next)
        {
            size++;
            t=t->next;
        }
        k=k%size;
        if(k==0)return head;
        int x=size-k;

        cur=head;
        ListNode* prev=nullptr;
        int y=0;
        while(cur && y<x)
        {
            prev=cur;
            cur=cur->next;
            y++;
        }
        t->next=head;
        prev->next=nullptr;

        return cur;



        
    }
};