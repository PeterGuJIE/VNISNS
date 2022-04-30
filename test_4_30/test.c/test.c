#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int my_strlen(const char* arr)
{
	assert(arr != NULL);
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = "abcraf";
	printf("%d\n", my_strlen(arr));
	return 0;
}



//char* my_strcpy(char* arr1, const char* arr2)//assert  ╤оят
//{
//	char* ret = arr1;
//	assert(arr1 != NULL&&arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "######";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	int n,j= 0;
//	int sum = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (j = 1; j <= n; j++)
//	{
//		ret = ret*j;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum); 
//	return 0;
//}



//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2!='\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//int main()
//{
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}