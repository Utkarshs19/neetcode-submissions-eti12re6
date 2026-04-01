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
    void reorderList(ListNode* head) {

        vector<int> v;
        ListNode* cur=head;
        while(cur)
        {
            v.push_back(cur->val);
            cur=cur->next;
        }
        int i=0,j=v.size()-1;
        cur=head;
        while(i<=j)
        {
            cur->val=v[i];
            cur=cur->next;
            i++;
            if(i>j)break;
            cur->val=v[j];
            cur=cur->next;
            j--;
        }

        
        
    }
};
