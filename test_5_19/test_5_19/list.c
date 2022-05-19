#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
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
SlistNode* BuyNode(datatype x)
{
	SlistNode*new = (SlistNode*)malloc(sizeof(SlistNode));
	new->data = x;
	new->next = NULL;
	return new;
}
void SlistPushBack(SlistNode**pps, datatype x)
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
void SlistPushFront(SlistNode**pps, datatype x)
{
	SlistNode*new = BuyNode(x);
	new->next = *pps;
	*pps = new;
}
void SlistPopBack(SlistNode**pps)
{
	//如果链表等于空
	if (*pps == NULL)
	{
		return;
	}
	else if ((*pps)->next==NULL)
	{
		free(*pps);
		*pps = NULL;
	}
	else
	{
		SlistNode*front = NULL;
		SlistNode*back = *pps;
		while (back->next != NULL)
		{
			front = back;
			back = back->next;
		}
		free(back);
		front->next = NULL;
	}
}
void SlistPopFront(SlistNode**pps)
{
	SlistNode*next = (*pps)->next;
	free(*pps);
	*pps = next;
}


SlistNode* SlistFind(SlistNode*pps, datatype x)
{
	SlistNode*cur = pps;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void SlistInsert(SlistNode**pps, SlistNode*pos, datatype x)
{
	if (pos == *pps)
	{
		SlistPushFront(pps, x);
	}
	else
	{
		SlistNode*new = BuyNode(x);
		SlistNode*front = *pps;
		//SlistNode*front = NULL;
		//SlistNode*back = *pps;
		while (front->next != pos)
		{
			front = front->next;
		}

		front->next = new;
		new->next = pos;
	}
}

void SlistErase(SlistNode**pps, SlistNode*pos)
{
	if (pos == *pps)
	{
		SlistPopFront(pps);
	}
	else
	{
		SlistNode*front = *pps;
		while (front->next != pos)
		{
			front = front->next;
		}
		front->next = pos->next;
		free(pos);
	}
}