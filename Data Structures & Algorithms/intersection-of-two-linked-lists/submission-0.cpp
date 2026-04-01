/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        
        if(!headA || !headB)return nullptr;

        while(headA)
        {
            ListNode* cur=headB;

            while(cur)
            {
                if(cur==headA)
                {
                   return headA;
                }
                else
                cur=cur->next;
            }

            headA=headA->next;
           
        }

        return headA;

    }
};