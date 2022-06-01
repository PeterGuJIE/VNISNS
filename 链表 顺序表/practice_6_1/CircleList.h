#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

#pragma once

typedef int type;
typedef struct CircleList Clist;
struct CircleList
{
	type data;
	struct CircleList*prev;
	struct CircleList*next;
};

Clist*Init();
void PushBack(Clist*ps, type x);
void PushFront(Clist*ps, type x);
void PopBack(Clist*ps);
void PopFront(Clist*ps);

Clist*Find(Clist*ps, type x);
void Insert(Clist*ps, Clist*pos, type x);
void Delet(Clist*ps, Clist*pos);

void Print(Clist*ps);
void Defree(Clist*ps);