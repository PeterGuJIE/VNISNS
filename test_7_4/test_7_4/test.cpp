#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
#include<time.h>
#include<functional>
using namespace std;
class MyPrint
{
public:
	void operator()(int v)
	{
		cout << v << " ";
	}
};
class Great30
{
public:
	bool operator()(int v)
	{
		return v >= 30;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(30);
	v.push_back(40);
	v.push_back(10);
	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	replace_if(v.begin(), v.end(), Great30(), 3000);
	cout << "替换后：" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}
int main()
{

	test01();
	//test02();
	system("pause");
	return 0;
}











//class MyPrint
//{
//public:
//	void operator()(int v)
//	{
//		cout << v << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(10);
//
//	cout << "替换前：" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	replace(v.begin(), v.end(), 20, 2000);
//	cout << "替换后：" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//}
//int main()
//{
//
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}












//void MyPrint(int v)
//{
//	cout << v << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int>v2;
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), MyPrint);
//	cout << endl;
//}
//
//int main()
//{
//
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}













//void MyPrint(int v)
//{
//	cout << v << " ";
//}
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "反转前：" << endl;
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//
//	cout << "反转后：" << endl;
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//}
//int main()
//{
//
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}











//void MyPrint(int v)
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
//		v2.push_back(i+1);
//	}
//
//	vector<int>vTarget;
//	vTarget.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), MyPrint);
//	cout << endl;
//}
//int main()
//{
//
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}










//void MyPrint(int v)
//{
//	cout << v << " ";
//}
//void test01()
//{
//	srand((unsigned int)time(NULL));
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	random_shuffle(v.begin(),v.end());
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}












//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}











//class Great20
//{
//public:
//	bool operator()(int v)
//	{
//		return v > 20;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//
//	int num = count_if(v.begin(), v.end(), Great20());
//	cout << num << endl;
//}
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	bool operator==(const Person&p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//class AgeGreat20
//{
//public:
//	bool operator()(const Person&p)
//	{
//		return p.m_Age > 20;
//	}
//};
//void test02()
//{
//	vector<Person>v;
//	Person p1("aaa", 40);
//	Person p2("bbb", 10);
//	Person p3("ggg", 20);
//	Person p4("eee", 40);
//	Person p5("ddd", 30);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	int num = count_if(v.begin(), v.end(), AgeGreat20());
//	cout << num << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}














//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(40);
//	int num = count(v.begin(), v.end(),40);
//	cout << num << endl;
//}
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	bool operator==(const Person&p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("aaa", 40);
//	Person p2("bbb", 10);
//	Person p3("ggg", 20);
//	Person p4("eee", 40);
//	Person p5("ddd", 30);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p("ccc", 40);
//	int num = count(v.begin(), v.end(), p);
//	cout << num << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}











//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	v.push_back(2);
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//	{
//		cout << "找到元素" << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}