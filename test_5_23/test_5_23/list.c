#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

//void Init(Queue*ps)
//{
//	assert(ps);
//	ps->head = ps->tail = NULL;
//}
//
//void Defree(Queue*ps)
//{
//	assert(ps);
//	Node*cur = ps->head;
//	while (cur != NULL)
//	{
//		Node*next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	ps->head = ps->tail = NULL;
//}
//void Push(Queue*ps, Ttpe x)
//{
//	assert(ps);
//	Node*new = (Node*)malloc(sizeof(Node));
//	if (new == NULL)
//	{
//		printf("malloc false\n");
//		exit(-1);
//	}
//	new->next = NULL;
//	new->data = x;
//	if (ps->tail == NULL)
//	{
//		ps->head = ps->tail = new;
//	}
//	else
//	{
//		ps->tail->next = new;
//		ps->tail = new;
//	}
//}
//void Pop(Queue*ps)
//{
//	assert(ps);
//	assert(ps->head != NULL);
//	Node*next = ps->head->next;
//	free(ps->head);
//	ps->head = next;
//}
//
//Ttpe Front(Queue*ps)
//{
//	assert(ps);
//	assert(ps->head);
//	return ps->head->data;
//}
//Ttpe Back(Queue*ps)
//{
//	assert(ps);
//	assert(ps->head);
//	return ps->tail->data;
//}
//
//int Size(Queue*ps)
//{
//	assert(ps);
//	int size = 0;
//	Node*cur = ps->head;
//	while (cur != NULL)
//	{
//		size++;
//		cur = cur->next;
//	}
//	return size;
//}
//bool Empty(Queue*ps)
//{
//	assert(ps);
//	return ps->head == NULL;
//}
//
//
//MyStack* Creaet()
//{
//	MyStack*ps = (MyStack*)malloc(sizeof(MyStack));
//	if (ps == NULL)
//	{
//		exit(-1);
//	}
//	Init(&ps->q1);
//	Init(&ps->q2);
//	return ps;
//}
//void MyPush(MyStack*ps, Ttpe x)
//{
//	if (!Empty(&ps->q1))
//	{
//		Push(&ps->q1, x);
//	}
//	else 
//	{
//		Push(&ps->q2, x);
//	}
//}
//
//int MyPop(MyStack*ps)
//{
//	Queue*EmptyQ = &ps->q1;
//	Queue*noEmptyQ = &ps->q2;
//	if (!Empty(&ps->q1))
//	{
//		EmptyQ = &ps->q2;
//		noEmptyQ = &ps->q1;
//	}
//	//导数据
//	while (!Size(noEmptyQ)>1)
//	{
//		Push(EmptyQ, Front(noEmptyQ));
//		Pop(noEmptyQ);
//	}
//	int top = Frony(noEmptyQ);
//	Pop(noEmptyQ);
//	return top;
//}
//
//int MyTop(MyStack*ps)
//{
//	if (!Empty(&ps->q1))
//	{
//		return Back(&ps->q1);
//	}
//	else
//	{
//		return Back(&ps->q2);
//	}
//}
//
//bool MyEmpty(MyStack*ps)
//{
//	return Empty(&ps->q1) && Empty(&ps->q2);
//}
//
//void MyFree(MyStack*ps)
//{
//	Defree(&ps->q1);
//	Defree(&ps->q2);
//	free(ps);
//}






//void Init(stack*ps)
//{
//	ps->a = malloc(sizeof(Type)* 4);
//	if (ps->a == NULL)
//	{
//		printf("malloc fall\n");
//		exit(-1);
//	}
//	ps->max_size = 4;
//	ps->top = 0;
//}
//void Defree(stack*ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->max_size = ps->top = 0;
//}
//
//void Push(stack*ps, Type x)
//{
//	assert(ps);
//	if (ps->max_size == ps->top)
//	{
//		Type*tmp = realloc(ps->a, ps->max_size * 2 * sizeof(Type));
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
//void Pop(stack*ps)
//{
//	assert(ps);
//	//栈空，报错
//	assert(ps->top > 0);
//	ps->top--;
//}
//
//Type Top(stack*ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//	return ps->a[ps->top - 1];
//}
//int Size(stack*ps)
//{
//	assert(ps);
//	return ps->top;
//}
//bool Empty(stack*ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}
