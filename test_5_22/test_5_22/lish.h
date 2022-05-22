#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef struct SlistNode Node;
typedef int Ttpe;

struct SlistNode
{
	Node*next;
	Ttpe data;
};

typedef struct Queue
{
	Node*head;
	Node*tail;
}Queue;

void Init(Queue*ps);
void Defree(Queue*ps);
void Push(Queue*ps, Ttpe x);
void Pop(Queue*ps);

Ttpe Front(Queue*ps);
Ttpe Back(Queue*ps);

int Size(Queue*ps);
bool Empty(Queue*ps);






//typedef struct SlistNode
//{
//	Ttpe *a;
//	int top;
//	int max_size;
//};
//
//void Init(Node*ps);
//void Defree(Node*ps);
////»Î’ª
//void Push(Node*ps, Ttpe x);
////≥ˆ’ª
//void Pop(Node*ps);
//
//Ttpe Top(Node*ps);
//
//int Size(Node*ps);
//bool Empty(Node*ps);













//SlistNode*detect(SlistNode*head);