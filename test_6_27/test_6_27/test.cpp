#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void MyPrint(int val)
{
	cout << val << endl;
}
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//vector<int>::iterator itBegin = v.begin();

	//vector<int>::iterator itEnd = v.end();
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	for_each(v.begin(), v.end(), MyPrint);
}

int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}





//#include"MyArr.hpp"
//void printArr(MyArr<int>&arr)
//{
//	for (int i = 0; i < arr.gerSize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//void test01()
//{
//	MyArr<int> arr(5);
//	for (int i = 0; i < 5; i++)
//	{
//		arr.PushBack(i);
//	}
//	cout << "arr打印输出:" << endl;
//	printArr(arr);
//	cout << "arr的容量:" <<arr.getCapa()<< endl;
//	cout << "arr的大小:" << arr.gerSize() << endl;
//
//
//	MyArr<int> arr2(arr);
//	cout << "arr2打印输出:" << endl;
//	printArr(arr2);
//	arr2.Popback();
//	cout << "arr2尾删后:"<< endl;
//	cout << "arr2的容量:" << arr2.getCapa() << endl;
//	cout << "arr2的大小:" << arr2.gerSize() << endl;
//	//MyArr<int> arr3(100);
//	//arr3 = arr;
//}
//class Person
//{
//public:
//	Person(){};
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//void printPerson(MyArr<Person>&arr)
//{
//	for (int i = 0; i < arr.gerSize(); i++)
//	{
//		cout << "姓名: " << arr[i].m_Name << " 年龄: " << arr[i].m_Age << endl;
//	}
//}
//void test02()
//{
//	MyArr<Person>arr(10);
//	Person p1("孙悟空", 999);
//	Person p2("韩信", 20);
//	Person p3("妲己", 40);
//	Person p5("赵云", 30);
//	Person p4("安琪拉", 25);
//	arr.PushBack(p1);
//	arr.PushBack(p2);
//	arr.PushBack(p3);
//	arr.PushBack(p4);
//	arr.PushBack(p5);
//
//	printPerson(arr);
//
//	cout << "arr的容量:" << arr.getCapa() << endl;
//	cout << "arr的大小:" << arr.gerSize() << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}






//template<class T1, class T2>
//class Person;
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p)
//{
//	cout << "类外实现--姓名：" << p.m_Name << "类外实现--年龄：" << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//
//	friend void printPerson(Person<T1, T2>p)
//	{
//		cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//	}
//	friend void printPerson2<>(Person<T1, T2>p);
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//void test01()
//{
//	Person<string, int>p("Tom", 20);
//	printPerson(p);
//}
//void test02()
//{
//	Person<string, int>p("Jerry", 20);
//	printPerson2(p);
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}









//#include"person.hpp"
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//	T1 m_Name;
//	T1 m_Age;
//};
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名： " << this->m_Name << "年龄： " << this->m_Age << endl;
//}
//void test01()
//{
//	Person<string, int>p("Jerrt",20);
//	p.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}