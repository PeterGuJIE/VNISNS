#define _CRT_SECURE_NO_WARNINGS 1
#include"contact1.h"
void menu()
{
	printf("*************************************\n");
	printf("******** 1.add       2.del    *******\n");
	printf("******** 3.search    4.modify *******\n");
	printf("******** 5.show      6.sort   *******\n");
	printf("******** 0.exit               *******\n");
	printf("*************************************\n");
}
int main()
{
	int input = 0;
	struct contact con;
	initcontact(&con);
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			addcontact(&con);
			break;
		case del:
			delcontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modifyconst(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			sortcontact(&con);
			break;
		case EXIT:
			//销毁通讯录-释放动态内存
			destroycontact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}






//struct s
//{
//	int n;
//	int arr[0];
//};
//int main()
//{
//	struct s* ps = (struct s*)malloc(sizeof(struct s) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct s*str = (struct s*)realloc(ps, 44);
//	if (str != NULL)
//	{
//		ps = str;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}