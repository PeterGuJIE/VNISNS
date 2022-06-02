//#define _CRT_SECURE_NO_WARNINGS 1
//#include"Stack.h"
//
//void Init(Stack*ps)
//{
//	ps->a = malloc(sizeof(type)* 4);
//	ps->max_size = 4;
//	ps->size = 0;
//}
//void Push(Stack*ps, type x)
//{
//	assert(ps);
//	if (ps->max_size == ps->size)
//	{
//		type*tmp = realloc(ps->a, ps->max_size * 2 * sizeof(type));
//		if (tmp == NULL)
//			exit(-1);
//		else
//		{
//			ps->a = tmp;
//			ps->max_size *= 2;
//		}
//	}
//	ps->a[ps->size] = x;
//	ps->size++;
//}
//void Pop(Stack*ps)
//{
//	assert(ps);
//	assert(ps->size>0);
//	ps->size--;
//}
//
//type Top(Stack*ps)
//{
//	assert(ps);
//	assert(ps->size>0);
//	return ps->a[ps->size - 1];
//}
//int Size(Stack*ps)
//{
//	assert(ps);
//	return ps->size;
//}
//void Defree(Stack*ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL; 
//	ps->size = ps->max_size = 0;
//}
//bool Empty(Stack*ps)
//{
//	assert(ps);
//	return ps->size == 0;
//}