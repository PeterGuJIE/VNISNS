#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
//SlistNode* reverse(SlistNode*ps)
//{
//	if (ps == NULL);
//	{
//		return NULL;
//	}
//	SlistNode*n1 = NULL;
//	SlistNode*n2 = ps;
//	SlistNode*n3 = n2->next;
//	while (n2 != NULL)
//	{
//		n2->next = n1;
//		n1 = n2;
//		n2 = n3;
//		if (n3 != NULL)
//		{
//			n3 = n3->next;
//		}
//	}
//	return n1;
//}

//SlistNode* reverse(SlistNode*ps)
//{
//	SlistNode*cur = ps;
//	SlistNode*new = NULL;
//	while (cur!=NULL)
//	{
//		SlistNode*next = cur->next;
//		cur->next = new;
//		new = cur;
//		cur = next;
//	}
//	return new;
//}
//SlistNode*middle(SlistNode*ps)
//{
//	SlistNode*slow = ps, *fast = ps;
//	while (fast&&fast->next)
//	{
//		slow = slow->next;
//		fast = slow->next->next;
//	}
//	return slow;
//}
//
//SlistNode*mergeTwo(SlistNode*p1, SlistNode*p2)
//{
//	if (p1 == NULL)
//	{
//		return p2;
//	}
//	if (p2 == NULL)
//	{
//		return p1;
//	}
//	SlistNode*head = NULL, *tail = NULL;
//	while (p1 != NULL && p2 != NULL)
//	{
//		if (p1->data < p2->data)
//		{
//			if (tail == NULL)
//			{
//				head = tail = p1;
//			}
//			else
//			{
//				tail->next = p1;
//				tail = tail->next;
//			}
//			p1 = p1->next;
//		}
//		else
//		{
//			if (tail == NULL)
//			{
//				head = tail = p2;
//			}
//			else
//			{
//				tail->next = p2;
//				tail = tail->next;
//			}
//			p2 = p2->next;
//		}
//	}
//	if (p1 != NULL)
//	{
//		tail->next = p1;
//	}
//	if (p2 != NULL)
//	{
//		tail->next = p2;
//	}
//	return head;
//}
//

//SlistNode*mergeTwo(SlistNode*p1, SlistNode*p2)
//{
//	if (p1 == NULL)
//	{
//		return p2;
//	}
//	if (p2 == NULL)
//	{
//		return p1;
//	}
//	SlistNode*head = NULL, *tail = NULL;
//	if (p1->data < p2->data)
//	{
//		head = tail = p1;
//		p1 = p1->next;
//	}
//	else
//	{
//		head = tail = p2;
//		p2 = p2->next;
//	}
//	while (p1 != NULL && p2 != NULL)
//	{
//		if (p1->data < p2->data)
//		{
//			tail->next = p1;
//			p1 = p1->next;
//		}
//		else
//		{
//			tail->next = p2;
//			p2 = p2->next;
//		}
//		tail=tail->next;
//	}
//	if (p1 != NULL)
//	{
//		tail->next = p1;
//	}
//	if (p2 != NULL)
//	{
//		tail->next = p2;
//	}
//	return head;
//}

bool hasCycle(SlistNode*head)
{
	SlistNode*slow = NULL, *fast = NULL;
	while (fast&&fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return true;
		}
	}
	return false;
}



void SlistPrint(SlistNode*ps)
{
	SlistNode*cur = ps;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SlistNode* BuyNode(int x)
{
	SlistNode*new = (SlistNode*)malloc(sizeof(SlistNode));
	new->data = x;
	new->next = NULL;
	return new;
}
void SlistPushBack(SlistNode**pps, int x)
{

	SlistNode*new = BuyNode(x);
	if (*pps == NULL)
	{
		*pps = new;
	}
	else
	{
		//找到尾节点的指针
		SlistNode*back = *pps;
		while (back->next != NULL)
		{
			back = back->next;
		}
		//尾节点，链接新节点
		back->next = new;
	}
}