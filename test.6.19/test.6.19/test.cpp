#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void test01()
{
	MyPrint myprint;
	myprint("hello word");
}
class Myadd
{
public:
	int operator()(int num1,int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	Myadd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;

	cout << Myadd()(100, 100) << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}








//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	bool operator==(Person&p)
//	{
//		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(Person&p)
//	{
//		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
//		{
//			return false;
//		}
//		return true;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//
//	Person p2("Tom", 20);
//
//	if (p1 == p2)
//	{
//		cout << "p1=p2" << endl;
//	}
//	else
//	{
//		cout << "p1!=p2" << endl;
//	}
//}
//
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
//	Person(int age)
//	{
//		m_a = new int(age);
//	}
//	~Person()
//	{
//		if (m_a != NULL)
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//	}
//
//	Person& operator=(Person&p)
//	{
//		if (m_a != NULL)
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//		m_a = new int(*p.m_a);
//		return *this;
//	}
//	int *m_a;
//
//};
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;
//	cout << "p1年龄: " << *p1.m_a << endl;
//
//	cout << "p2年龄: " << *p2.m_a << endl;
//
//	cout << "p3年龄: " << *p3.m_a << endl;
//
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}







//class MyInteger
//{
//	friend ostream&operator<<(ostream&cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_a = 0;
//	} 
//	MyInteger& operator++()
//	{
//		m_a++;
//		return *this;
//	}
//	MyInteger operator++(int)
//	{
//		MyInteger tmp = *this;
//		m_a++;
//		return tmp;
//	}
//private:
//	int m_a;
//};
//
//ostream&operator<<(ostream&cout, MyInteger myint)
//{
//	cout << myint.m_a;
//	return cout;
//}
//void test01()
//{
//	MyInteger myint;
//	cout << ++(++myint) << endl;
//
//}
//void test02()
//{
//	MyInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}






//class Person
//{
//	friend ostream& operator<<(ostream&out, Person&p);
//public:
//	Person(int a, int b)
//	{
//		m_a = a;
//		m_b = b;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//ostream& operator<<(ostream&out, Person&p)
//{
//	out << "m_a= " << p.m_a << " m_b= " << p.m_b;
//	return out;
//}
//void test01()
//{
//	Person p(10,10);
//	//p.m_a = 10;
//	//p.m_b = 10;
//	//cout << p.m_a << endl;
//
//	cout << p << endl;
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
//	Person operator+(Person &p)
//	{
//		Person tmp;
//		tmp.m_a = this->m_a + p.m_a;
//		tmp.m_b = this->m_b + p.m_b;
//		return tmp;
//	}
//	int m_a;
//	int m_b;
//};
//
//
////Person operator+(Person&p1, Person&p2)
////{
////	Person tmp;
////	tmp.m_a = p1.m_a + p2.m_a;
////	tmp.m_b = p1.m_b + p2.m_b;
////	return tmp;
////}
//Person operator+(Person&p1, int num)
//{
//	Person tmp;
//	tmp.m_a = p1.m_a + num;
//	tmp.m_b = p1.m_b + num;
//	return tmp;
//}
//void test01()
//{
//	Person p1;
//	p1.m_a = 10;
//	p1.m_b = 10;
//	Person p2;
//	p2.m_a = 30;
//	p2.m_b = 20;
//	Person p3 = p1.operator+(p2);
//
//	//Person p3 = operator+(p1, p2);
//	//Person p3 = p1 + p2;
//
//	//重载
//	Person p4 = p1 + 100;
//	cout << "p3.m_a= " << p3.m_a << endl;
//	cout << "p3.m_b= " << p3.m_b << endl;
//	cout << "p4.m_a= " << p4.m_a << endl;
//	cout << "p4.m_a= " << p4.m_a << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}





//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//
//	void visit();
//	void visit2();
//
//	Building*building;
//};
//class Building
//{
//	friend void GoodGay::visit();
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "visit函数:" << building->m_SittingRoom << endl;
//
//	cout << "visit函数:" << building->m_BedRoom << endl;
//
//}
//void GoodGay::visit2()
//{
//	cout << "visit2函数:" << building->m_SittingRoom << endl;
//
//	//cout << "visit2函数:" << building->m_BedRoom << endl;
//
//}
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}







//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();
//	Building *building;
//};
//class Building
//{
//	friend class GoodGay;
//public:
//	Building();
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "好基友类:" << building->m_SittingRoom << endl;
//
//	cout << "好基友类:" << building->m_BedRoom << endl;
//
//}
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}