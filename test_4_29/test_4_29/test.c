#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//double Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / Pow(n, -k));
//	}
//	else if (k == 0)
//		return 1;
//	else
//		return n*Pow(n,k-1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}


//int digitsum(unsigned int n)
//{
//	//while (1)
//	//{
//	//	if (n / 10 != 0)
//	//	{
//	//		return digitsum(n / 10) + n % 10;
//	//	}
//	//	else
//	//		return n;
//	//}
//	
//	/*
//	if (n > 9)
//	{
//		return digitsum(n / 10) + n % 10;
//	}
//	else
//		return n;
//*/
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int ret = digitsum(n);
//	printf("%d\n", ret);
//	return 0;
//}



//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1)>=2)
//		reverse_string(arr+1);
//	arr[len - 1] = tmp;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//int my_string(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_string(arr) - 1;
//	while (left <right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++; right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//void print_table(int n)
//{
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		int i = 0;
//		for (i = 1; i <= j; i++)
//		{
//			printf("%-2d*%d=%-2d ", j, i, j*i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}


//void print(int a)
//{
//	int n = 0;
//	printf("奇数位:\n");
//	for (n = 30; n >=0; n -= 2)
//	{
//		printf("%d",(a >> n) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (n = 31; n >= 1; n -= 2)
//	{
//		printf("%d", (a >> n) & 1);
//	}
//
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}



//int  get_dif_bit(int a, int b)
//{
//	int c = a^b;
//	int count = 0;
//	int n = 0;
//	for (n = 0; n < 32; n++)
//	{
//		if (((c >> n) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int count = get_dif_bit(a, b);
//	printf("%d\n", count);
//	return 0;
//}




//int count_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int count_bit(int n)
//{
//	int count = 0;
//	int i;
//	for (i = 0; i < 32;i++)
//	if (((n >> i) & 1) == 1)
//	{
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit(n);
//	printf("%d\n", count);
//	return 0;
//}



//typedef struct  stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void Print1(stu s)
//{
//	printf("name:%s\n", s.name);
//	printf("age:%d\n", s.age);
//}
//void Print2(stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("name:%d\n", ps->age);
//}
//int main()
//{
//	stu s = {"张三",20,"15649655410","男"};
//	Print1(s);
//	Print2(&s);
//	return 0;
//}



//struct c
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct c s;
//	char *pc;
//};
//int main()
//{
//	char arr[] = { "hello bit\n" };
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct  stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//int main()
//{
//	struct  stu s1 = {"张三",20,"15649655410","男"};
//	stu s2;
//	return 0;
//}