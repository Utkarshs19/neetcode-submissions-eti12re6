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
            cur=head->next;
           
            while(cur)
            {
               if(head->val>cur->val)
               {
                swap(head->val,cur->val);
               }
                cur=cur->next;
            }
            head=head->next;

        }

        return ans;
        
    }
};