//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include"Queue.h"
//
//typedef struct Tree
//{
//	struct Tree*left;
//	struct Tree*right;
//	char data;
//}Tree;
//
//Tree*Creat(char*arr, int*i)//把数字中的'#'去除，然后中层遍历
//{
//	if (arr[*i] == '#')
//	{
//		(*i)++;
//		return NULL;
//	}
//	Tree*new = (Tree*)malloc(sizeof(Tree));
//	if (new == NULL)
//		exit(-1);
//	new->data = arr[*i];
//	++(*i);
//	new->left = Creat(arr, i);
//	new->right = Creat(arr, i);
//	return new;
//}
//void Middle(Tree*root)
//{
//	if (root == NULL)
//		return;
//	Middle(root->left);
//	printf("%c ", root->data);
//	Middle(root->right);
//}
//int main()
//{
//	char arr[50];
//	scanf("%s", arr);
//	int i = 0;
//	Tree*ret = Creat(arr, &i);
//	Middle(ret);
//	return 0;
//}


















//typedef struct Tree
//{
//	struct Tree*left;
//	struct Tree*right;
//	type data;
//}Tree;
//
//int Depth(Tree*root)//判断是否是平衡树
//{
//	if (root == NULL)
//		return 0;
//	int left = Depth(root->left);
//	int right = Depth(root->right);
//	return left > right ? left + 1 : right + 1;
//}
//bool IsBalanced(Tree*root)
//{
//	if (root == NULL)
//		return true;
//	int leftB = Depth(root->left);
//	int rightB = Depth(root->right);
//	return abs(leftB - rightB) < 2 && IsBalanced(root->left) && IsBalanced(root->right);
//}
//int main()
//{
//	Tree ps;
//	bool ret = IsBalanced(&ps);
//	return 0;
//}












//typedef struct Tree
//{
//	struct Tree*left;
//	struct Tree*right;
//	type data;
//}Tree;
//
//int Depth(Tree*root)//求树的深度
//{
//	if (root == NULL)
//		return 0;
//	int left = Depth(root->left);
//	int right = Depth(root->right);
//	return left > right ? left + 1 : right + 1;
//}
//
//int main()
//{
//	Tree ps;
//	int ret = Depth(&ps);
//	return 0;
//}








//typedef struct Tree
//{
//	struct Tree*left;
//	struct Tree*right;
//	type data;
//}Tree;
//
//
//int Size(Tree*root)//先序遍历
//{
//	return root == NULL ? 0 : Size(root->left) + Size(root->right) + 1;
//}
//
//void _preorder(Tree*root, int*new, int*size)
//{
//	if (root == NULL)
//		return;
//	new[*size] = root->data;
//	_preorder(root->left, new, size);
//	_preorder(root->right, new, size);
//}
//
//
//int*preorder(Tree*root,int*rootsize)
//{
//	int size = Size(root);
//	int*new = (int*)malloc(sizeof(int));
//	int i = 0;
//	*rootsize = size;
//	_preorder(root, new, &i);
//	return new;
//}
//
//
//int main()
//{
//	Tree node1;
//	Tree node2;
//	Tree node3;
//	node1.data = 1;
//	node1.left = &node2;
//	node1.right = &node3;
//
//	node2.data = 2;
//	node2.left = NULL;
//	node2.right = NULL;
//
//	node3.data = 3;
//	node3.left = NULL;
//	node3.right = NULL;
//	int size = 0;
//	int*ret = preorder(&node1,&size);
//
//	return 0;
//}











//typedef struct Tree
//{
//	struct Tree*left;
//	struct Tree*right;
//	type data;
//}Tree;
//
//void Level(Tree*root)//层次遍历树
//{
//	Queue ps;
//	Init(&ps);
//	if (root != NULL)
//	{
//		Push(&ps, root);
//	}
//	while (!Empty(&ps))
//	{
//		Tree*front = Front(&ps);
//		Pop(&ps);
//		printf("%c ", front->data);
//		if (front->left != NULL)
//			Push(&ps, front->left);
//		if (front->right!=NULL)
//			Push(&ps, front->right);
//	}
//
//	Defree(&ps);
//}
//
//int main()
//{
//	Tree*A = (Tree*)malloc(sizeof(Tree));
//	A->data = 'A';
//	A->left = NULL;
//	A->right = NULL;
//
//	Level(A);
//
//	return 0;
//}





//typedef char type;
//typedef struct Tree
//{
//	struct Tree*left;
//	struct Tree*right;
//	type data;
//}Tree;
//
//
//void TressSize(Tree*ps, int*size)//获取树的大小
//{
//	if (ps == NULL)
//		return;
//	else
//	{
//		(*size)++;
//	}
//	TressSize(ps->left, size);
//	TressSize(ps->right, size);
//}
//
//
//void TreeLea(Tree*ps, int*size)//树叶大小
//{
//	if (ps == NULL)
//		return;
//	if (ps->left == NULL&&ps->right == NULL)
//		(*size)++;
//	TreeLea(ps->left, size);
//	TreeLea(ps->right, size);
//}
//int main()
//{
//	Tree*A = (Tree*)malloc(sizeof(Tree));
//	A->data = 'A';
//	A->left = NULL;
//	A->right = NULL; 
//
//	int size = 0;
//	TressSize(A, &size);
//
//	int leasize = 0;
//	TreeLea(A, &leasize);
//
//	Level(A);
//
//	return 0;
//}









//typedef char type;
//typedef struct Tree
//{
//	struct Tree*left;
//	struct Tree*right;
//	type data;
//}Tree;
//
//void Prev(Tree*ps)//先序
//{
//	if (ps == NULL)
//		return;
//	printf("%d ", ps->data);
//	Prev(ps->left);
//	Prev(ps->right);
//}
//void Middle(Tree*ps)//中序
//{
//	if (ps == NULL)
//		return;
//	Middle(ps->left);
//	printf("%d ", ps->data);
//	Middle(ps->right);
//}
//void Post(Tree*ps)//后序
//{
//	if (ps == NULL)
//		return;
//	Post(ps->left);
//	Post(ps->right);
//	printf("%d ", ps->data);
//}
//
//int main()
//{
//	Tree*A = (Tree*)malloc(sizeof(Tree));
//	A->data = 'A';
//	A->left = NULL;
//	A->right = NULL; 
//	Prev(A);
//	Middle(A);
//	Post(A);
//	return 0;
//}