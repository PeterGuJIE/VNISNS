#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void testSLit1()
{
	SlistNode*plist = NULL;
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 2);
	SlistPushBack(&plist, 3);
	SlistPushFront(&plist, 4);
	SlistPrint(plist);
	//SlistPopFront(&plist);
	//SlistPopFront(&plist);
	//SlistPopBack(&plist);
	/*SlistPrint(plist);*/
	SlistNode*pos = SlistFind(plist,3);
	if (pos!=NULL)
	{
		SlistInsert(&plist,pos,30);
	}
	SlistPrint(plist);

	pos = SlistFind(plist, 4);
	if (pos != NULL)
	{
		SlistErase(&plist, pos);
	}
	SlistPrint(plist);
}
int main()
{
	testSLit1();
	return 0;
}