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
    ListNode* insertionSortList(ListNode* head) {

        ListNode* ans=head;

        ListNode* cur;
        
        
        while(head)
        {
            int mini=INT_MAX;
            cur=head;
            ListNode* p;
            while(cur)
            {
               if(mini>cur->val)
               {
                mini=cur->val;
                p=cur;
               }
                cur=cur->next;
            }
            swap(head->val,p->val);
            head=head->next;

        }

        return ans;
        
    }
};