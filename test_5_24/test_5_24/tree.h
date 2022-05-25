#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

struct TreeNode;

typedef struct SlistNode Node;
typedef struct TreeNode* Ttpe;

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