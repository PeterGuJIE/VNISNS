#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}
	void showPerson();
	//{
	//	cout << "姓名：" << this->m_Name << "年龄： " << this->m_Age << endl;
	//}
	T1 m_Name;
	T2 m_Age;
};
template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名：" << this->m_Name << "年龄： " << this->m_Age << endl;
}
void test01()
{
	Person<string, int>p("Tom", 20);
	p.showPerson();
}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}








//template<class T>
//class Base
//{
//public:
//	T m;
//};
////class Son :public Base//错误
////{
////
////};
//class Son :public Base<int>
//{
//
//};
//void test01()
//{
//	Son s1;
//}
//
//template <class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的类型为： " << typeid(T1).name() << endl;
//		cout << "T2的类型为： " << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//void test02()
//{
//	Son2<int, char>S2;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}














//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->m_Name << "age: " << this->m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p("孙悟空", 100);
//	printPerson1(p);
//}
//template<class T1, class T2>
//void printPerson2(Person<T1,T2>&p)
//{
//	p.showPerson();
//	cout << "T1的类型为： " << typeid(T1).name() << endl;
//	cout << "T2的类型为： " << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person<string, int>p("猪八戒", 90);
//	printPerson2(p);
//}
//template <class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T的类型为： " << typeid(T).name() << endl;
//}
//void test03()
//{
//	Person<string, int>p("唐僧", 30);
//	printPerson3(p);
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}





//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//void test01()
//{
//	MyClass<Person2>m;
//	MyClass<Person1>m1;
//
//	m1.func1();
//	m.func2();
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}








//template<class NameType, class  AgeType=int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->m_Name << "age: " << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//void test01()
//{
//	//Person p("孙悟空", 100);
//	Person <string,int>p("孙悟空", 1000);
//	p.showPerson();
//}
//void test02()
//{
//	Person <string>p("猪八戒", 999);
//	p.showPerson();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}








//template<class NameType,class  AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->m_Name << "age: " << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//
//	Person<string, int>p1("孙悟空", 999);
//	p1.showPerson();
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
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	int m_Age;
//	string m_Name;
//};
//template<class T>
//bool myCompare(T&a, T&b)
//{
//	if (a == b)
//		return true;
//	else
//		return false;
//}
//
//template<>bool myCompare(Person&a, Person&b)
//{
//	if (a.m_Name == b.m_Name&&b.m_Age == a.m_Age)
//		return true;
//	else
//		return false;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	bool ret = myCompare(a, b);
//	if (ret)
//		cout << "a == b" << endl;
//	else
//		cout << "a != b" << endl;
//}
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 20);
//	bool ret = myCompare(p1, p2);
//	if (ret)
//		cout << "p1 == p2" << endl;
//	else
//		cout << "p1 != p2" << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}





//void myPrint(int a, int b)
//{
//	cout << "调用普通函数" << endl;
//}
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "调用函数模板" << endl;
//}
//template<class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "调用重载函数模板" << endl;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//myPrint(a, b);
//
//	myPrint<>(a, b);
//	myPrint(a, b, 100);
//	char c1 = 'c';
//	char c2 = 'd';
//	myPrint(c1, c2);
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}









//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//template <class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd01(a, c) << endl;
//
//	cout << myAdd02<int>(a, c) << endl;
//
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}










//template<class T>
//void mySwap(T&a, T&b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//template<class T>
//void mySort(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] > arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//template<class T>
//void printArr(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	char arr[] = "dabcfe";
//	int len = strlen(arr);
//	mySort(arr, len);
//	printArr(arr, len);
//}
//void test02()
//{
//	int arr[] = { 5, 4, 8, 3, 1, 44, 50 };
//	int len = sizeof(arr) / sizeof(int);
//	mySort(arr, len);
//	printArr(arr, len);
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}









//template<class T>
//void mySwap(T&a, T&b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b);
//	//mySwap(a, c);
//	//mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//template<class T>
//void func()
//{
//	cout << "func 调用" << endl;
//}
//void test02()
//{
//	func<int>();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}










//void swapInit(int&a, int&b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void swapDouble(double&a, double&b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}
//template<typename T>//模板
//void mySwap(T&a, T&b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//swapInit(a, b);
//	//mySwap(a, b);
//
//	mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//
//	double c = 10.2;
//	double d = 2.2;
//	swapDouble(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}