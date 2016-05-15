#include <iostream>
#include <list>

using namespace std;

/*
 *
 * input 2->4->3 5->6->4
 * output 7->0->8
 *
 * */

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL){}
};

class Solution
{
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			ListNode *head = NULL, *i1 = NULL, *i2 = NULL;
			ListNode **i = &head;
			int flag = 0;
			for(i1 = l1, i2 = l2; i1 != NULL && i2 != NULL; i1 = i1->next, i2 = i2->next)
			{
				int n = flag + i1->val + i2->val;
				flag = n / 10;
				ListNode *node = new ListNode(n % 10);
				*i = node;
				i = &node->next;
			}
			for(; i1 != NULL; i1 = i1->next)
			{
				int n = flag + i1->val;
				flag = n / 10;
				ListNode *node = new ListNode(n % 10);
				*i = node;
				i = &node->next;
			}
			for(; i2 != NULL; i2 = i2->next)
			{
				int n = flag + i2->val;
				flag = n / 10;
				ListNode *node = new ListNode(n % 10);
				*i = node;
				i = &node->next;
			}
			if(flag != 0)
			{
				ListNode *node = new ListNode(flag);
				*i = node;
				i = &node->next;

			}
			return head;
		}
};

int main()
{
	ListNode *l1 = new ListNode(0);

	ListNode *l2 = new ListNode(3);
	ListNode *l3 = new ListNode(7);
	l2->next = l3;

	Solution s;

	ListNode *head = s.addTwoNumbers(l1, l2);

	cout<<head<<endl;

	return 0;
}