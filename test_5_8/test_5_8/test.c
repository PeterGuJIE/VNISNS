#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
#include<assert.h>
int main()
{
	char arr[10] = " ";
	memset(arr, '1', 9);
	printf("%s\n", arr);
	//int arr1[10] = { 0 };
	//memset(arr1, '1', 40);
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr1[i]);
	//}
	return 0;
}









//void* my_memcmp(void*arr1, void*arr2, int count)
//{
//
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[] = { 1, 2, 4, 5, 6 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}









//void* my_memcpy(void*arr2, const void*arr1, int num)
//{
//	void*ret = arr2;
//	assert(arr2&&arr1);
//	while (num--)
//	{
//		*(char*)arr2 = *(char*)arr1;
//		++(char*)arr2;
//		++(char*)arr1;
//	}
//	return ret;
//}
//void* my_memmove(void*arr2,const  void*arr1,int count)
//{
//	void*ret = arr2;
//	assert(arr2&&arr1);
//	if (arr2 < arr1)
//	{
//		while (count--)
//		{
//			*(char*)arr2 = *(char*)arr1;
//			++(char*)arr2;
//			++(char*)arr1;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)arr2 + count) = *((char*)arr1 + count);
//		}
//	}
//
////////	if (arr2<arr1 || arr2>(char*)arr1 + count)
////////	{
////////
////////	}
////////	else
////////	{
////////	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	/*my_memcpy(arr1+2, arr1, 20);*/
//	my_memmove(arr1+3, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}







//struct s
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void*arr4,const void*arr3,size_t num)
//{
//	void*ret = arr4;
//	assert(arr4&&arr3);
//	while (num--)
//	{
//		*(char*)arr4 = *(char*)arr3;
//		++(char*)arr4;
//		++(char*)arr3;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[10] = { 0 };
//	struct s arr3[] = { { "张三", 20 }, { "李四", 30 } };
//	struct s arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}








//int main()
//{
//	//char ch = tolower('Q');
//	//putchar(ch);
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I AM A Student";//小写
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}






//int main()
//{
//	char ch = '3';
//	int ret = isdigit(ch);
//	//int ret = islower(ch);
//	printf("%d\n", ret);
//	return 0;
//}






//int main()
//{
//	/*char*str = strerror(errno);*/
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	/*printf("%s\n", str);*/
//	return 0;
//}







//int main()
//{
//	char arr[] = "apw@asdvc.das";
//	char*p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char*ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//
//
//
//	//char*ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}