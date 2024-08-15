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
 ListNode* reverseKGroup(ListNode* head, int k) {
	ListNode* nn = new ListNode;
	ListNode* n1 = nn;
	ListNode* n2 = head;
	nn->next = head;
	if (n2)
	{
		ListNode* n3 = n2->next;
		if (n3)
		{
			ListNode* n4=n3->next;
			int n = 0;//节点个数
			while (n2)
			{
				n++;
				n2 = n2->next;
			}//计算节点个数;
			n2 = head;
			int m = n / k;//总共有m组
			while (m--)
			{
				int k1 = k;
				while (--k1)
				{
					n3->next = n2;
					n2 = n3;
					n3 = n4;
					if (n4) {
						n4 = n4->next;
					}
				}
				ListNode* nnn = n1->next;
				n1->next = n2;
				n1 = nnn;
				n1->next = n3;
				n2 = n3;
					n3 = n4;
					if (n4)
					{
						n4 = n4->next;
					}
			}
		}
	}
	return nn->next;
}
};
