#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;


void test01()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);


	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到了相邻重复的数字：" << *it << endl;
	}
}

int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}












//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了大于5的数字：" << *it << endl;
//	}
//
//}
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class Greater20
//{
//public:
//	bool operator()(Person&p)
//	{
//		return p.m_Age > 20;
//	}
//};
//void test02()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了 姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
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
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(), 50);
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << *it << endl;
//	}
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
//		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
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
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person pp("bbb", 20);
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了 姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;
//	}
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}












//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		return v + 100;
//	}
//};
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
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>vTarget;
//
//	vTarget.resize(v.size());
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//	cout << endl;
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}













//void print01(int val)
//{
//	cout << val << " ";
//}
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), print02());
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











//void test01()
//{
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	vector<bool>v2;
//	v2.resize(v.size());
//	cout << "--------------------" << endl;
//	transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}















//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(10);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//sort(v.begin(), v.end(), MyCompare());
//	sort(v.begin(), v.end(), greater<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}












//void test01()
//{
//	negate<int>n;
//	cout << n(50) << endl;
//}
//void test02()
//{
//	plus<int>p;
//	cout << p(10, 30) << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}











//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(30);
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	cout << "-------------" << endl;
//	sort(v.begin(), v.end(), MyCompare());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}











//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		while (it != v.end())
//		{
//			cout << "找到了大于5的数字：" << *it << endl;
//			it++;
//		}	
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}