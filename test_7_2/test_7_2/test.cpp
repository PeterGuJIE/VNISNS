#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<set>
#include<map>
#include<vector>
#include<ctime>
using namespace std;

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test01()
{
	MyAdd add;
	cout << add(10, 20)<< endl;
}

class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;
};
void test02()
{
	MyPrint print;
	print("hello world");
	print("hello world");
	print("hello world");
	cout << "print调用次数为：" << print.count << endl;
}
void doPrint(MyPrint&mp, string test)
{
	mp(test);
}
void test03()
{
	MyPrint print;
	doPrint(print, "Hello C++");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}

















//#define CEHUA  0
//#define MEISHU 1
//#define YANFA  2
//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//void createWorker(vector<Worker>&v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "员工";
//		worker.m_Name += nameSeed[i];
//		worker.m_Salary = rand() % 10000 + 10000;
//
//		v.push_back(worker);
//	}
//}
//
//void setGroup(vector<Worker>&v, multimap<int,Worker>&m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		int deptId = rand() % 3;
//
//		m.insert(make_pair(deptId, *it));
//	}
//}
//void showWorker(multimap<int, Worker>&m)
//{
//	cout << "策划部门：" << endl;
//	multimap<int,Worker>::iterator pos = m.find(CEHUA);
//	int count = m.count(CEHUA);
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
//	}
//	cout << "------------------" << endl;
//	cout << "美术部门：" << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU);
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
//	}
//
//	cout << "------------------" << endl;
//	cout << "研发部门：" << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA);
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	vector<Worker>v;
//	createWorker(v);
//
//	//for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "姓名：" << it->m_Name << " 工资：" << it->m_Salary << endl;
//	//}
//
//	multimap<int,Worker>m;
//	setGroup(v,m);
//
//	showWorker(m);
//
//
//	system("pause");
//	return 0;
//}















//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//class Compare
//{
//public:
//	bool operator()(const Person&p1,const Person&p2)
//	{
//		return p1.m_Age > p2.m_Age;
//	}
//};
//void test01()
//{
//	map<Person, int, Compare>m;
//	Person p1("刘备", 20);
//	Person p2("关羽", 35);
//	Person p3("张飞", 18);
//	Person p4("赵云", 25);
//
//	m.insert(make_pair(p1,20));
//	m.insert(make_pair(p2,30));
//	m.insert(make_pair(p3,50));
//	m.insert(make_pair(p4, 100));
//
//	for (map<Person, int, Compare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "姓名：" << it->first.m_Name << " 年龄：" << it->first.m_Age << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	test01();
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
//	map<int, int, MyCompare>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 150));
//	m.insert(make_pair(3, 50));
//	m.insert(make_pair(4, 60));
//	m.insert(make_pair(5, 80));
//
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
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
//	map<int, int>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 30));
//	m.insert(make_pair(3, 20));
//	m.insert(make_pair(4, 40));
//
//	map<int, int>::iterator pos = m.find(4);
//	if (pos != m.end())
//	{
//		cout << "查到了元素 key = " << (*pos).first << " value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}














//void printMap(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//
//	m.insert(make_pair(2, 20));
//
//	m.insert(map<int, int>::value_type(3, 30));
//
//	m[4] = 40;
//
//	//cout << m[5] << endl;
//
//	printMap(m);
//
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);
//	printMap(m);
//
//	m.erase(30);
//	printMap(m);
//
//	//m.erase(m.begin(), m.end());
//	//printMap(m);
//
//	m.clear();
//	printMap(m);
//
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}













//void printMap(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的大小为：" << m.size() << endl;
//	}
//}
//void test02()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(5, 50));
//	m2.insert(pair<int, int>(12, 100));
//	m2.insert(pair<int, int>(10, 80));
//
//	cout << "交换前：" << endl;
//	printMap(m);
//	printMap(m2);
//
//	cout << "交换后：" << endl;
//	m.swap(m2);
//	printMap(m);
//	printMap(m2);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}










//void printMap(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//
//	map<int, int>m2(m);
//	printMap(m2);
//	
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}












//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//class Compare
//{
//public:
//	bool operator()(const Person&p1,const Person&p2)
//	{
//		return p1.m_Age > p2.m_Age;
//	}
//};
//void test01()
//{
//	set<Person, Compare>s;
//	Person p1("刘备", 20);
//	Person p2("关羽", 35);
//	Person p3("张飞", 18);
//	Person p4("赵云", 25);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	for (set<Person>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}












//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2)const
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(50);
//
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//
//	set<int, MyCompare>s2;
//
//	s2.insert(10);
//	s2.insert(20);
//	s2.insert(40);
//	s2.insert(30);
//	s2.insert(50);
//
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
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
//	pair<string, int>p("Tom", 20);
//	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;
//
//	pair<string, int>p2 = make_pair("Jerry", 30);
//	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}