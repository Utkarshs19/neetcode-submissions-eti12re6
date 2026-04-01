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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* cur=new ListNode(0);
        ListNode* node=cur;

        while(list1 && list2)
        {
            if(list1->val==list2->val)
            {
                ListNode* temp=new ListNode(list1->val);
                cur->next=temp;
                cur=cur->next;
                ListNode* t=new ListNode(list2->val);
                cur->next=t;
                cur=cur->next;

                list1=list1->next;
                list2=list2->next;
            }
            else if(list1->val < list2->val)
            {
                ListNode* temp=new ListNode(list1->val);
                cur->next=temp;
                list1=list1->next;
                cur=cur->next;
            }
            else
            {
                ListNode* temp=new ListNode(list2->val);
                cur->next=temp;
                list2=list2->next;
                cur=cur->next;
            }
        }

        while(list1)
        {
            ListNode* temp=new ListNode(list1->val);
            cur->next=temp;
            list1=list1->next;
            cur=cur->next;
        }

        while(list2)
        {
            ListNode* temp=new ListNode(list2->val);
            cur->next=temp;
            list2=list2->next;
            cur=cur->next;
        }


        return node->next;

        
    }
};
