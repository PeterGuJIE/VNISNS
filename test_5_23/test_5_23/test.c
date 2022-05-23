#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
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
	Middle(root->left);
	Middle(root->right);
	printf("%d", root->data);
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
	return 0;
}






//bool isvalid(char *s)
//{
//	stack ps;
//	Init(&ps);
//	while (*s!='\0')
//	{
//		switch (*s)
//		{ 
//		case '{':
//		case '[':
//		case '(':
//			Push(&ps, *s);
//			break;
//		case '}':
//		case ']':
//		case ')':
//			if (Empty(&ps))
//			{
//				Defree(&ps);
//				return false;
//			}
//			char top = Top(&ps);
//			Pop(&ps);
//			if ((*s == '}'&&top != '{') || (*s == ']'&&top != '[') || (*s == ')'&&top != '('))
//			{
//				return false;
//			}
//			else
//			{
//				++s;
//			}
//			break;
//		}
//	}
//	bool ret = Empty(&ps);
//	Defree(&ps);
//	return ret;
//
//}
//int main()
//{
//	printf("%d", isvalid("{}"));
//	return 0;
//}