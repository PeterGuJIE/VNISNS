#define _CRT_SECURE_NO_WARNINGS 1//¿ÎºóÁ·Ï°
#include"practice.h"


int main()
{
	Queue ps;
	Init(&ps);
	return 0;
}









//typedef char type;
//
//typedef struct stack//ÅÐ¶Ï×Ö·û´®ÊÇ·ñÏàµÈ
//{
//	type*a;
//	int size;
//	int max_size;
//}stack;
//
//void Init(stack* ps)
//{
//	ps->a = malloc(sizeof(type)* 4);
//	ps->max_size = 4;
//	ps->size = 0;
//}
//
//void Push(stack* ps, type x)
//{
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
//	else
//	{
//		ps->a[ps->size] = x;
//		ps->size++;
//	}
//}
//bool Empty(stack* ps)
//{
//	assert(ps);
//	return ps->size == 0;
//}
//
//type Top(stack* ps)
//{
//	assert(ps);
//	assert(ps->size>0);
//	return ps->a[ps->size - 1];
//}
//void Pop(stack* ps)
//{
//	assert(ps);
//	assert(ps->size>0);
//	ps->size--;
//}
//void Defree(stack* ps)
//{
//	free(ps->a);
//	ps->a = NULL;
//	ps->max_size = ps->size = 0;
//}
//bool Ispass(char*s)
//{
//	stack ps;
//	Init(&ps);
//	while (*s!='\0')
//	{
//		switch (*s)
//		{
//		case '{':
//		case '[':
//		case '(':
//			Push(&ps, *s);
//			break;
//		case '}':
//		case ']':
//		case ')':
//			if (Empty(&ps))
//			{
//				free(&ps);
//				return false;
//			}
//			char top = Top(&ps);
//			Pop(&ps);
//			if ((top != '{'&&*s == '}') || (top != ']'&&*s == '[') || (top != ')'&&*s == '('))
//			{
//				Defree(&ps);
//				return true;
//			}
//			else
//			{
//				s++;
//			}
//			break;
//		default:
//			break;
//		}
//		
//	}
//	
//}
//
//int main()
//{
//	bool ret = Ispass("{}");
//	
//	return 0;
//}