#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int tpye;

typedef struct TreeNode
{
	tpye arr;
	tpye parent;
	tpye lchild;
	tpye rchild;
}TNode;


typedef struct HFtree
{
	int length;
	TNode*data;
}HFtree;

HFtree*Init(int*arr,int length);
int*Selectmin(HFtree*root);
void Creat(HFtree*root);
void Prev(HFtree*root, int length);