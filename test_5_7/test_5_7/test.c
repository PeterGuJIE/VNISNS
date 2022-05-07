#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
char*my_strstr(char*p1,char*p2)
{
	assert(p1&&p2);
	char*s3 = p1;//起始位置
	if (*p2 == '\0')
	{
		return p1;
	}
	while (*s3)
	{
		char*s1 = s3;
		char*s2 = p2;
		while ((*s1 && *s2 != '\0') && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return s3;
		}
		//if (*s1 == '\0')
		//{
		//	return NULL;
		//}
		s3++;
	}
	return NULL;
}
int main()
{
	char*p1 = "abddefghi";
	char*p2 = "";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("不存在\n");
	}
	else
		printf("%s\n", ret);
	return 0;
}









//int my_strncmp(const char*p1,const char*p2, int count)
//{
//	assert(*p1&&*p2);
//	while (--count&&(*p1++ == *p2++))
//	{
//		if (*p1&&*p2 == '\0')
//			return 0;
//	}
//	return (*p1 - *p2);
//}
//int main()
//{
//	const char *p1 = "abcd";
//	const char *p2 = "abcdef";
//	int ret = my_strncmp(p1, p2,4);
//	printf("%d\n", ret);
//	return 0;
//}







//char*my_strncat(char*arr1, const char*arr2, int count)
//{
//	char*ret = arr1;
//	assert(*arr1&&*arr2);
//	while (*arr1 != '\0')
//	{
//		arr1++;
//	}
//	while (count)
//	{
//		*arr1++ = *arr2++;
//		count--;
//	}
//	*arr1 = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0ssssss";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}






//char* my_strncpy(char*arr1,const char*arr2, int count)
//{
//	char*ret = arr1;
//	assert(arr1&&arr2);
//	while (count)
//	{
//		*arr1++ = *arr2++;
//		count--;
//	}
//	*arr1 = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[10] = "absd\0dd";
//	char arr2[] = "hello";
//	my_strncpy(arr1, arr2,5);
//	printf("%s\n", arr1);
//	return 0;
//}





//int my_strcmp(const char*p1,const char*p2)
//{
//	assert(*p1&&*p2);
//	while (*p1==*p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//	if (*p1 > *p2)//return(*p1-*p2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char*p1 = "abc";
//	char*p2 = "abcd";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}









//int main()
//{
//	char*p1 = "abc";
//	char*p2 = "qbc";
//	if (strcmp(p1, p2) >0)
//	{
//		printf("p1>p2\n");
//	}
//	else if(strcmp(p1, p2) == 0)
//	{
//		printf("p1=p2\n");
//	}
//	else if (strcmp(p1, p2) <0)
//	{
//		printf("p1<p2\n");
//	}
//	
//	
//	//int ret = strcmp(p1, p2);
//	//printf("%d\n", ret);
//	return 0;
//}






//char* my_strcat(char*arr1,const char*arr2)
//{
//	char* ret = arr1;
//	assert(arr1&&arr2 != NULL);
//	while (*arr1 != '\0')
//	{
//		arr1++;
//	}
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}






//void my_strcpy(char*arr1, char*arr2)
//{
//	assert(arr1 != NULL&&arr2 != NULL);
//	while (*arr2!='\0')
//	{
//		*arr1++ = *arr2++;
//	}
//	*arr1 = *arr2;
//}
//char* my_strcpy(char*arr1,const char*arr2)
//{
//	assert(arr1 != NULL&&arr2 != NULL);
//	char*ret = arr1;
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "asvbsdf";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}






//int my_strlen(const char*str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int my_strlen(const char*str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	/*int len = my_strlen("asfvc");*/
//	/*prinf("%d\n", len);*/
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}







//int find(int arr[3][3], int  k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int find(int arr[3][3], int  k, int*row, int*col)
//{
//	int x = 0;
//	int y = *col - 1;
//	while (x <= *row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 } };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = find(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是:%d %d\n",x,y);
//	}
//	else 
//		printf("找不到\n");
//	return 0;
//}