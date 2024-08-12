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
    ListNode* swapPairs(ListNode* head) {
	ListNode* n = new ListNode();
	ListNode* ret = n;
	n->next = head;
	n = n->next;
	ListNode*n1;
	ListNode* n2;
	ListNode* n3;
	ListNode* n4;
	int t = 0;
	if (n)
	{
		n1 = n;
		n = n->next;
		n2 = n;
		if (n)
		{
			n = n->next;
			n3 = n;
			if (n)
			{
				n = n->next;
				n4 = n;
			}
			else
			{
				n2->next = n1;
				n1->next = NULL;
				ret->next = n2;
				return n2;
			}
		}
		else
		{
			return ret->next;
		}
	}
	else
	{
		return NULL;
	}
	while (n2)
	{
		//n->next = n2;
		n1->next = NULL;
		n2->next = n1;
		if (t == 0)
		{
			ret->next = n2;
			t++;
		}
		else
		{
			n->next = n2;
		}
		if (n3)
		{
			n1->next = n3;
		}
		if (n4)
		{
			n3->next = n4->next;
			n1->next = n4;
			n4->next = n3;
		}
		n1 = n3;
		n2 = n3;
		n4 = n3;
		n = n3;
		if (n4)
		{
			n1 = n4->next;
			n2 = n4->next;
			n3 = n4->next;
			n4 = n4->next;
			if (n4)
			{
				n2 = n4->next;
				n3 = n4->next;
				n4 = n4->next;
				if (n4)
				{
					n3 = n4->next;
					n4 = n4->next;
					if (n4)
					{
						n4 = n4->next;
						//n = n4;
					}
				}
			}
		}
	}
	return ret->next;
    }
};
