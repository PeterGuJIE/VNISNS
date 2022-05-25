#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include"tree.h"

typedef char Type;
typedef struct TreeNode
{
	struct TreeNode*left;
	struct TreeNode*right;
	Type data;
}TNode;

void Prev(TNode*root)
{
	if (root == NULL)
	{
		return;
	}
	printf("%c ", root->data);
	Prev(root->left);
	Prev(root->right);
}
void Middle(TNode*root)
{
	if (root == NULL)
	{
		return;
	}
	Middle(root->left);
	printf("%d", root->data);
	Middle(root->right);
}
void Post(TNode*root)
{

	if (root == NULL)
	{
		return;
	}
	Post(root->left);
	Post(root->right);
	printf("%d", root->data);
}

//int size = 0;
//void TreeSize(TNode*root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	else
//	{
//		++size;
//	}
//	TreeSize(root->left);
//	TreeSize(root->right);
//	
//}



//void TreeSize(TNode*root,int* size)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	else
//	{
//		++*size;
//	}
//	TreeSize(root->left,size);
//	TreeSize(root->right, size);
//
//}
//int TreeSize(TNode*root)
//{
//	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//int TreeLeaSize(TNode*root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (root->left == NULL&&root->right == NULL)
//	{
//		return 1;
//	}
//	return TreeLeaSize(root->left) + TreeLeaSize(root->right);
//}
void  TreeLeaSize(TNode*root,int* size)
{
	if (root == NULL)
	{
		return ;
	}
	if (root->left == NULL&&root->right == NULL)
	{
		(*size)++;
	}
	TreeLeaSize(root->left, size);
	TreeLeaSize(root->right, size);
}

void Level(TNode*root)
{
	Queue q;
	Init(&q);
	if (root)
	{
		Push(&q, root);
	}
	while (!Empty(&q))
	{
		TNode*front = Front(&q);
		Pop(&q);
		printf("%c ", front->data);
		if (front->left)
		{ 
			Push(&q, front->left);
		}
		if (front->right)
		{
			Push(&q, front->right);
		}
	}
	printf("\n");
	Defree(&q);
}

int main()
{
	TNode*A = (TNode*)malloc(sizeof(TNode));
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;
	TNode*B = (TNode*)malloc(sizeof(TNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;
	TNode*C = (TNode*)malloc(sizeof(TNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;
	TNode*D = (TNode*)malloc(sizeof(TNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;
	A->left = B;
	A->right = C;
	B->left = D;
	Prev(A);
	printf("\n");
	//int Asize = 0;
	//TreeSize(A,&Asize);
	//int ret = TreeSize(A);
	int Asize = 0;
	TreeLeaSize(A, &Asize);
	printf("%d\n", Asize);
	Level(A);
	return 0;
}