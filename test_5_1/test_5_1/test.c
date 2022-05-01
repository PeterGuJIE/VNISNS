#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	float* pfloat = (float*)&n;
	printf("n的值为:%d\n", n);
	printf("*pfloat的值为:%f\n", *pfloat);

	*pfloat = 9.0;
	printf("sum的值为:%d\n", n);
	printf("*pfloat的值为:%f\n", *pfloat);
	return 0;
}




//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}




//int check_sys()
//{
//	/*int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;*/
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p=(char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}