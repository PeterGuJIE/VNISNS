//#define _CRT_SECURE_NO_WARNINGS 1
//#include"LNode.h"
//
//void Init(LNode*ps)
//{
//	ps->data = malloc(sizeof(tpye)*4);
//	ps->max_size = 4;
//	ps->size = 0;
//}
//void IsPass(LNode*ps)//еп╤о
//{
//	if (ps->max_size == ps->size)
//	{
//		tpye*new = (tpye*)realloc(ps->data, sizeof(tpye)* 4);
//		if (new == NULL)
//		{
//			exit(-1);
//		}
//		else
//		{
//			ps->data = new;
//			ps->max_size *= 4;
//		}
//
//	}
//}
//void PushBack(LNode*ps, tpye x)
//{
//	IsPass(ps);
//	ps->data[ps->size] = x;
//	ps->size++;
//}
//
//void PushFront(LNode*ps, tpye x)
//{
//	IsPass(ps);
//	int end = ps->size - 1;
//	while (end >= 0)
//	{
//		ps->data[end + 1] = ps->data[end];
//		end--;
//	}
//	ps->data[0] = x;
//	ps->size++;
//}
//void PopBack(LNode*ps)
//{
//	assert(ps->size > 0);
//	ps->data[ps->size - 1] = 0;
//	ps->size--;
//}
//void PopFront(LNode*ps)
//{
//	assert(ps->size > 0);
//	int i = 1;
//	while (i<ps->size)
//	{
//		ps->data[i - 1] = ps->data[i];
//		i++;
//	}
//	ps->size--;
//}
//bool Find(LNode*ps, tpye x)
//{
//	for (int i = 0; i < ps->size ; i++)
//	{
//		if (ps->data[i] == x)
//			return true;
//	}
//	return false;
//}
//void Insert(LNode*ps, int pos, tpye x)
//{
//	assert(pos <= ps->size);
//	//IsPass(ps);
//	int end = ps->size - 1;
//	while (end >= pos)
//	{
//		ps->data[end + 1] = ps->data[end];
//		end--;
//	}
//	ps->data[pos] = x;
//	ps->size++;
//}
//void Delet(LNode*ps, int pos)
//{
//	assert(pos <= ps->size);
//	int front = pos + 1;
//	while (front < ps->size)
//	{
//		ps->data[front - 1] = ps->data[front];
//		front++;
//	}
//	ps->size--;
//}
//
//void Modify(LNode*ps, int pos, tpye x)
//{
//	assert(pos <= ps->size);
//	for (int i = 0; i < ps->size; i++)
//	{
//		if (ps->data[i] == pos)
//		{
//			ps->data[i] = x;
//		}
//	}
//}
//void Print(LNode*ps)
//{
//	for (int i = 0; i < ps->size; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("\n");
//}
//void Defree(LNode*ps)
//{
//	free(ps->data);
//	ps->data = NULL;
//	ps->max_size = ps->size = 0;
//}