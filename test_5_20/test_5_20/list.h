#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#pragma once
typedef int Type;
typedef struct ListNode Dlist;
struct ListNode
{
	struct ListNode*next;
	struct ListNode*prev;
	Type data;
};


Dlist* Init();
void Destory(Dlist*ps);
void Print(Dlist*ps);
void PushBack(Dlist*ps, Type x);
void PushFront(Dlist*ps, Type x);
void PopBack(Dlist*ps);
void PopFront(Dlist*ps);

Dlist*Find(Dlist*ps, Type x);
void Insert(Dlist* pos, Type x);
void Erase(Dlist* pos);