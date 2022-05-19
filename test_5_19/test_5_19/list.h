#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef int datatype;
typedef struct SlistNode SlistNode;

typedef struct SlistNode
{
	datatype data;
	SlistNode*next;
};



void SlistPrint(SlistNode*ps);
void SlistPushBack(SlistNode**pps, datatype x);
void SlistPushFront(SlistNode**pps, datatype x);
void SlistPopBack(SlistNode**pps);
void SlistPopFront(SlistNode**pps);

SlistNode* SlistFind(SlistNode*pps, datatype x);
//��posǰ�����x
void SlistInsert(SlistNode**pps, SlistNode*pos, datatype x);
//ɾ��posλ�õ�ֵ
void SlistErase(SlistNode**pps, SlistNode*pos);


