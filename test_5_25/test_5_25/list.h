#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int Type;

typedef struct TreeNode
{
	int weight;
	int parent;
	int lchild;
	int rchild;
}TNode;

typedef struct HFtree
{
	struct TreeNode*data;
	int length;
}HFtree;



HFtree*init(int*weight, int length);
int* selectMin(HFtree*root);
void creatTree(HFtree*root);
void pre(HFtree*root, int index);





//typedef char Type;
//
//typedef struct TreeNode
//{
//	struct TreeNode*left;
//	struct TreeNode*right;
//	Type data;
//}TNode;