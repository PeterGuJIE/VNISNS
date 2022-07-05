#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<numeric>
using namespace std;

void myPrint(int v)
{
	cout << v << " ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int>vTarget;

	vTarget.resize(max(v1.size(), v2.size()));
	cout << "v1和v2的差集为：" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;

	cout << "v2和v1的差集为：" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}










//void myPrint(int v)
//{
//	cout << v << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int>vTarget;
//
//	vTarget.resize(v1.size() + v2.size());
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}







//void myPrint(int v)
//{
//	cout << v << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
//	vTarget.resize(min(v1.size(),v2.size()));
//
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}









//void myPrint(int v)
//{
//	cout << v << " ";
//}
//void test01()
//{
//	vector<int>v;
//	v.resize(10);
//
//	fill(v.begin(), v.end(), 100);
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}













//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << "total = " << total << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}














//void myPrint(int v)
//{
//	cout << v << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 100);
//	}
//	cout << "交换前：" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
//
//	cout << "----------------" << endl;
//	swap(v1, v2);
//	//v1.swap(v2);
//	cout << "交换后：" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}