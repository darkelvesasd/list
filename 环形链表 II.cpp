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
    int kthToLast(ListNode* head, int k) {
        ListNode*cur=head;
        ListNode*pos=head;
        while(k>0)
        {
            cur=cur->next;
            k--;
        }
        while(cur)
        {
            cur=cur->next;
            pos=pos->next;
        }
        return pos->val;
    }
};
