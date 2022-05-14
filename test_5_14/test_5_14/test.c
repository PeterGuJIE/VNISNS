#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"





//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return;
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}






//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return;
//	}
//	fseek(pf, -2, SEEK_END);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}





//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return;
//	}
//	fseek(pf,-2,SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//void menu()
//{
//	printf("***********************************\n");
//	printf("********1.add     2.del      ******\n");
//	printf("********3.search  4.modify   ******\n");
//	printf("********5.show    6.sort     ******\n");
//	printf("********7.save    0.exit     ******\n");
//	printf("***********************************\n");
//}
//void test()
//{
//	int input = 0;
//	struct contact con;
//	initcontact(&con);
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case add:
//			addcontact(&con);
//			break;
//		case del:
//			delcontact(&con);
//			break;
//		case search:
//			searchcontact(&con);
//			break;
//		case modify:
//			modifycontact(&con);
//			break;
//		case show:
//			showcontact(&con);
//			break;
//		case sort:
//			sortcontact(&con);
//			break;
//		case save:
//			savecontact(&con);
//			break;
//		case EXIT:
//			savecontact(&con);
//			exitcontact(&con);
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}





//struct s
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct s s = { "张三", 20, 55.6 };
//	struct s s = { 0 };
//	//FILE*pf = fopen("test.txt", "wb");
//	FILE*pf = fopen("test.txt", "rb");
//
//	if (pf == NULL)
//	{
//		return;
//	}
//	//fwrite(&s, sizeof(struct s), 1, pf);
//	fread(&s, sizeof(struct s), 1, pf);
//	printf("%s %d %lf", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}