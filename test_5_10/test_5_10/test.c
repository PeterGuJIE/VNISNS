#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
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
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}







//union un
//{
//	int a;
//	char arr[5];
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}








//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == a)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}








//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == a)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}





//union un
//{
//	char c;
//	int i;
//};
//int main()
//{ 
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}






//enum Sex
//{
//	male,
//	female,
//	secret
//};
//enum color
//{
//	red,
//	green,
//	blue
//};
//int main()
//{
//	enum Sex s = male;
//	enum color c = blue;
//	printf("%d %d %d\n", red, green, blue);
//	return 0;
//}