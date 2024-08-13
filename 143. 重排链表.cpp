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
ListNode* reverse(ListNode* head)
{
	ListNode* l = new ListNode;
	ListNode* cur = head;
	while (head)
	{
		cur = head->next;
		head->next = l->next;
		l->next = head;
		head = cur;
	}
	cur = l->next;
	delete l;
	l = nullptr;
	return cur;
}
void reorderList(ListNode* head) {
	ListNode* slow=head;
	ListNode* fast=head;
	while (fast->next)
	{
		fast = fast->next;
		if (fast->next)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	fast=reverse(slow->next);
	slow->next = nullptr;
	slow = head;
	while (slow && fast)
	{
		ListNode* cur1= slow->next;
		ListNode* cur2 = fast->next;
		slow->next = fast;
		fast->next = cur1;
		slow = cur1;
		fast = cur2;
	}
}
};
