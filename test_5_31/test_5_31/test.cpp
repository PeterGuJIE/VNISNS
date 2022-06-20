#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void TestFunc(int a =10,int b=20,int c=30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl<<endl;

}

struct stack
{
	int *a;
	int size;
	int max_size;
};


void Init(struct stack*ps, int n = 4)
{
	ps->a = (int*)malloc(sizeof(int)*n);
	ps->size = 0;
	ps->max_size = n;
}

int main()
{
	struct stack ps;
	Init(&ps, 100);
	TestFunc();
	TestFunc(1);
	TestFunc(1,2);
	TestFunc(1,2,3);
	return 0;
}






//void TestFuns(int a=0)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	TestFuns();//参数的默认值
//	TestFuns(1);
//	return 0;
//}








#include<iostream>
//using namespace std;//C++库名
//
//
//
//int main()
//{
//	int a = 0;
//	double d;
//	cin >> a>>d;//流提取
//	cout << a<<" "<<d<<endl;//流插入
//
//
//	cout << "hello,world" << endl;
//}



//namespace bit
//{
//	int f = 0;
//	int rand = 0;
//}
//using namespace bit;
//
//int main()
//{
//	f = 10;
//	printf("%d,",f);
//}









//namespace bit
//{
//	int f = 0;
//	int rand = 0;
//	void d()
//	{
//		printf("void d");
//	}
//	struct Node
//	{
//		int val;
//		struct Node*next;
//	};
//}
//
////using namespace bit;//把bit命名空间放出来
//
//void f()
//{}
//int a = 0;
//
//int main()
//{
//	int a = 1;
//	printf("%p\n", rand);
//	printf("%p\n", f);
//
//	printf("%d\n", bit::rand);
//	printf("%d\n", bit::f);
//
//
//	printf("%d\n",a);
//	printf("%d\n", ::a);//全局域
//	return 0;
//}



