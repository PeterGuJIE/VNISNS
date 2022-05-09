#define _CRT_SECURE_NO_WARNINGS 1
#include<stddef.h>
#include<stdio.h>
struct s
{
	int a : 3;
	int b : 4;
	int c : 5;
	int d : 4;	
};
int main()
{
	struct s s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	return 0;	
}






//struct s
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct s s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}



//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* tmp)
//{
//	tmp->a = 100;
//	tmp->c = 'w';
//	tmp->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* tmp)
//{
//	printf("%d %c %lf\n", tmp->a, tmp->c, tmp->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;*/
//	return 0;
//}





//struct s
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//struct s s;
//	//offsetof();
//	printf("%d\n", offsetof(struct s, c));
//	printf("%d\n", offsetof(struct s, i));
//	printf("%d\n", offsetof(struct s, d));
//	return 0;
//}





//#pragma pack(4)//设置默认对齐数位4
//struct s1
//{
//	char c1;
//	double d;
//};
//#pragma pack()//取消设置默认对齐数
//int main()
//{
//	struct s1 s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}






//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct s1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct s2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}






//struct t
//{
//	double weight;
//	short age;
//};
//struct s
//{
//	char c;
//	struct t st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct s s = { 'c', { 55.6, 30 }, 100, 3.14, "hello,bit" };
//	printf("%c, %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}



//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}



//struct stu
//{
//	char name[30];
//	char tele[12];
//	char sex[10];
//	int age;
//};
//int main()
//{
//	struct stu s1;
//	struct stu s2;
//	return 0;
//}