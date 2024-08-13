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
 struct cmp
 {
	 bool operator()(const ListNode*l1,const ListNode*l2)
	 {
		 return l1->val > l2->val;
	 }
 };
ListNode* mergeKLists(vector<ListNode*>& lists) {
	priority_queue<ListNode*, vector<ListNode*>, cmp>pq;
	ListNode*head = new ListNode;
	ListNode* ret = head;
	for(auto a : lists)
	{
		if (a)
		{
			pq.push(a);
		}
	}
	while (!pq.empty())
	{
		ListNode* t = pq.top();
		pq.pop();
		if (t->next)
		{
			pq.push(t->next);
		}
		head->next = t;
		head = t;
	}
    return ret->next;
}
};
