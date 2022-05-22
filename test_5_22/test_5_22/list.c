#define _CRT_SECURE_NO_WARNINGS 1
#include"lish.h"
void Init(Queue*ps)
{
	assert(ps);
	ps->head = ps->tail = NULL;
}

void Defree(Queue*ps)
{
	assert(ps);
	Node*cur = ps->head;
	while (cur != NULL)
	{
		Node*next = cur->next;
		free(cur);
		cur = next;
	}
	ps->head = ps->tail = NULL;
}
void Push(Queue*ps, Ttpe x)
{
	assert(ps);
	Node*new = (Node*)malloc(sizeof(Node));
	if (new == NULL)
	{
		printf("malloc false\n");
		exit(-1);
	}
	new->next = NULL;
	new->data = x;
	if (ps->tail == NULL)
	{
		ps->head = ps->tail = new;
	}
	else
	{
		ps->tail->next = new;
		ps->tail = new;
	}
}
void Pop(Queue*ps)
{
	assert(ps);
	assert(ps->head != NULL);
	Node*next = ps->head->next;
	free(ps->head);
	ps->head = next;
}

Ttpe Front(Queue*ps)
{
	assert(ps);
	assert(ps->head);
	return ps->head->data;
}
Ttpe Back(Queue*ps)
{
	assert(ps);
	assert(ps->head);
	return ps->tail->data;
}

int Size(Queue*ps)
{
	assert(ps);
	int size = 0;
	Node*cur = ps->head;
	while (cur != NULL)
	{
		size++;
		cur = cur->next;
	}
	return size;
}
bool Empty(Queue*ps)
{
	assert(ps);
	return ps->head == NULL;
}







//void Init(Node*ps)
//{
//	ps->a = malloc(sizeof(Ttpe)*4);
//	if (ps->a == NULL)
//	{
//		printf("malloc fall\n");
//		exit(-1);
//	}
//	ps->max_size = 4;
//	ps->top = 0;
//}
//void Defree(Node*ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->max_size = ps->top = 0;
//}
//
//void Push(Node*ps, Ttpe x)
//{
//	assert(ps);
//	if (ps->max_size == ps->top)
//	{
//		Ttpe*tmp = realloc(ps->a, ps->max_size * 2 * sizeof(Ttpe));
//		if (tmp == NULL)
//		{
//			printf("realloc fall\n");
//			exit(-1);
//		}
//		else
//		{
//			ps->a = tmp;
//			ps->max_size *= 2;
//		}
//	}
//	ps->a[ps->top] = 0;
//	ps->top++;
//}
//
//void Pop(Node*ps)
//{
//	assert(ps);
//	//Õ»¿Õ£¬±¨´í
//	assert(ps->top > 0);
//	ps->top--;
//}
//
//Ttpe Top(Node*ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//	return ps->a[ps->top - 1];
//}
//int Size(Node*ps)
//{
//	assert(ps);
//	return ps->top;
//}
//bool Empty(Node*ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}
























//SlistNode*detect(SlistNode*head)
//{
//	SlistNode*slow = head, *fast = head;
//	while (fast &&fast->next!= NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//		{
//			SlistNode*meet = slow;
//			while (head != meet)
//			{
//				head = head->next;
//				meet = meet->next;
//			}
//			return meet; 
//		}
//	}
//	return NULL;
//}