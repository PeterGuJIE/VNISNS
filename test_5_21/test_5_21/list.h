#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct SlistNode SlistNode;

typedef struct SlistNode
{
	int data;
	SlistNode*next;
};


SlistNode* reverse(SlistNode*ps);
SlistNode*middle(SlistNode*ps);
void SlistPrint(SlistNode*ps);
void SlistPushBack(SlistNode**pps, int x);
SlistNode*mergeTwo(SlistNode*p1, SlistNode*p2);