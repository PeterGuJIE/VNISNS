#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
int main()
{
	SlistNode*plist = NULL;
	SlistNode*p2 = NULL;
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 2);
	SlistPushBack(&plist, 3);
	SlistPushBack(&p2, 1);
	SlistPushBack(&p2, 3);
	SlistPushBack(&p2, 4);
	SlistNode*ret = mergeTwo(plist, p2);
	SlistPrint(ret);
	return 0;
}




//int main()
//{
//	SlistNode*plist = NULL;
//	SlistPushBack(&plist, 1);
//	SlistPushBack(&plist, 2);
//	SlistPushBack(&plist, 3);
//	SlistNode*ret = middle(plist);
//	printf("%d\n", ret->data);
//	return 0;
//}










//void testSLit1()
//{
// 	SlistNode*plist = NULL;
//	SlistPushBack(&plist, 1);
//	SlistPushBack(&plist, 2);
//	SlistPushBack(&plist, 3);
//	SlistNode*ret = reverse(plist);
//	SlistPrint(ret);
//
//}
//int main()
//{
//	testSLit1();
//	return 0;
//}