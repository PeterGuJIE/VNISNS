#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<list>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

void test01()
{
	set<int>s1;
	pair<set<int>::iterator,bool>ret = s1.insert(10);

	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}

	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��" << endl;
	}

	multiset<int>m1;
	m1.insert(10);
	m1.insert(10);
	m1.insert(30);
	m1.insert(20);

	for (multiset<int>::iterator it = m1.begin(); it != m1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}






//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	set<int>::iterator pos = s1.find(10);
//	if (pos != s1.end())
//	{
//		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//}
//void test02()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(30);
//	int num = s1.count(30);
//	cout << "num = " << num << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}















//void printSet(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	set<int>s1;
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);
//	printSet(s1);
//	
//	s1.clear();
//	printSet(s1);
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}












//void printSet(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//
//	printSet(s1);
//
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;
//	}
//}
//void test02()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//
//	set<int>s2;
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(400);
//	s2.insert(300);
//	cout << "����ǰ��" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "������" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}











//void printSet(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//
//	printSet(s1);
//
//	set<int>s2(s1);
//	printSet(s2);
//
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}













//class Person
//{
//
//public:
//	Person(string name, int age, int height)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;
//	}
//	string m_Name;
//	int m_Age;
//	int m_Height;
//};
//bool myCompare(Person&p1,Person&p2)
//{
//	if (p1.m_Age == p2.m_Age)
//	{
//		return p1.m_Height > p2.m_Height;
//	}
//	else
//	{
//		return p1.m_Age < p2.m_Age;
//	}
//}
//void test01()
//{
//	list<Person>L;
//	Person p1("����", 35, 175);
//	Person p2("�ܲ�", 45, 180);
//	Person p3("��Ȩ", 40, 170);
//	Person p4("����", 25, 190);
//	Person p5("�ŷ�", 35, 160);
//	Person p6("����", 35, 200);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Age << " ��ߣ�" << (*it).m_Height << endl;
//	}
//	cout << "------------------" << endl;
//	cout << "�����" << endl;
//
//	L.sort(myCompare);
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Age << " ��ߣ�" << (*it).m_Height << endl;
//	}
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}











//void printList(list<int>&L)
//{
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(100);
//	L1.push_back(10);
//	L1.push_back(50);
//	cout << "��תǰ��" << endl;
//	printList(L1);
//
//	cout << "��ת��" << endl;
//	L1.reverse();
//	printList(L1);
//}
//
//bool myCompare(int v1,int v2)
//{
//	return v1 > v2;
//}
//void test02()
//{
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(100);
//	L1.push_back(10);
//	L1.push_back(50);
//	cout << "����ǰ��" << endl;
//	printList(L1);
//	//sort(L1.begin(), L1.end());
//	L1.sort();
//	cout << "�����" << endl;
//	printList(L1);
//
//	L1.sort(myCompare);
//	printList(L1);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}












//void printList(list<int>&L)
//{
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;
//
//	list<int>::iterator it = L1.begin();
//	it++;
//	it--;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}











//void printList(list<int>&L)
//{
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//
//	printList(L1);
//
//	L1.pop_back();
//	printList(L1);
//
//	L1.pop_front();
//	printList(L1);
//
//	list<int>::iterator it = L1.begin();
//	L1.insert(++it, 1000);
//	printList(L1);
//
//	it = L1.begin();
//	L1.erase(++it);
//	printList(L1);
//
//	L1.push_back(10000);
//	L1.push_back(10000);
//	L1.push_back(10000);
//	L1.push_back(10000);
//	printList(L1);
//
//	L1.remove(10000);
//	printList(L1);
//
//	L1.clear();
//	printList(L1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}









//void printList(list<int>&L)
//{
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//
//	printList(l1);
//
//	if (l1.empty())
//	{
//		cout << "l1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "l1��Ϊ��" << endl;
//		cout << "l1��Ԫ�ظ���Ϊ��" << l1.size() << endl;
//	}
//
//	l1.resize(10,10000);
//	printList(l1);
//
//	l1.resize(2);
//	printList(l1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}