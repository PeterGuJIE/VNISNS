#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Building
{
	friend void goodGay(Building*build);


public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";

	}
public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};
void goodGay(Building*build)
{
	cout << "好基友全局函数 " << build->m_SittingRoom << endl;

	cout << "好基友全局函数 " << build->m_BedRoom << endl;

}
void test01()
{
	Building building;
	goodGay(&building);
}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}





//class Person
//{
//public:
//	//this 是指针常量 不可修改
//	//const Person *const this;
//	void showPerson()const
//	{
//		//this->m_a = 100;
//		this->m_b = 200;
//	}
//	void func()
//	{
//
//	}
//	int m_a;
//	mutable int m_b;//加上关键字
//};
//void test01()
//{
//	Person p;
//	p.showPerson();
//	
//}
//void test02()
//{
//	const Person p;
//	//p.m_a = 200;
//	p.m_b = 300;
//
//	p.showPerson();
//	p.func();
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
//	void showClass()
//	{
//		cout << "showClass" << endl;
//	}
//	void showPerson()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age = " <<m_age<< endl;//this->m_age
//	}
//	int m_age;
//};
//
//void test01()
//{
//	Person*p = NULL;
//	p->showClass();
//	p->showPerson();
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
//		this->age = age;
//	}
//	Person& PersonAdd(Person&p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//void test01()
//{
//	Person p1(18);
//	cout << "p1 " << p1.age << endl;
//}
//void test02()
//{
//	Person p1(10);
//	Person p2(20);
//	p2.PersonAdd(p1).PersonAdd(p1).PersonAdd(p1);
//	cout << "p2 " << p2.age << endl;
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
//	int m_a;
//	static int m_b;
//	void func(){}
//	static void func2(){}
//
//};
//int Person::m_b = 0;
//void test01()
//{
//	Person p;
//	cout << sizeof(p) << endl;
//}
//void test02()
//{
//	Person p;
//	cout << sizeof(p) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//} 






//class person
//{
//public:
//	static void func()
//	{
//		m_a = 100;//可以访问
//		//m_b = 200;
//		cout << "func 调用" << endl;
//	}
//	static int m_a;
//	int m_b;
//private:
//	static void func2()
//	{
//		cout << "func2 调用" << endl;
//	}
//}; 
//int person::m_a = 0;
//void test01()
//{
//	person p;
//	p.func();
//	person::func();
//	person::func2();
//
//}
//int main()
//{
//	test01();
//	
//	system("pause");
//	return 0;
//}
//class Person
//{
//public:
//	static int m_a;
//private:
//	static int m_b;
//};
//int Person::m_a = 100;
//int Person::m_b = 200;
//void test01()
//{
//	Person p;
//	cout << p.m_a << endl;
//	Person p2;
//	p2.m_a = 200;
//	cout << p2.m_a << endl;
//
//}
//void test02()
//{
//	cout << Person::m_a << endl;
//
//	cout << Person::m_b << endl;
//
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}




//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone 析构" << endl;
//	}
//	string m_PName;
//};
//class Person
//{
//public:
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person" << endl;
//	}
//	~Person()
//	{
//		cout << "Person 析构" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
//void test01()
//{
//	Person p("张三", "苹果MAX"); 
//	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
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
//	/*Person(int a, int b, int c)
//	{
//		m_a = a;
//		m_b = b;
//		m_c = c;
//	}*/
//	Person(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
//	{
//
//	}
//	int m_a;
//	int m_b;
//	int m_c;
//};
//void test01()
//{
//	//Person p(10, 20, 30);
//	Person p(30,20,10);
//	cout << "m_a " << p.m_a << endl;
//	cout << "m_b " << p.m_b << endl;
//	cout << "m_c " << p.m_c << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}










//class Person
//{
//
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//	Person(int age, int height)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//		m_Height=new int(height);
//	}
//	Person(const Person&p)
//	{
//		cout << "person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		//深拷贝
//		m_Height = new int(*p.m_Height);
//	}
//	~Person()
//	{
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person析构构造函数调用" << endl;
//	}
//
//	int m_Age;
//	int *m_Height;
//};
//
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1的年龄 " << p1.m_Age << " 身高： "<< *p1.m_Height<<endl;
//	Person p2(p1);
//	cout << "p2的年龄 " << p2.m_Age << " 身高： " << *p2.m_Height << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}







//class Person
//{
//
//public:
//	/*Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}*/
//	Person(int age)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//	}
//	/*person(const person&p)
//	{
//		cout << "person拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//	}*/
//	~Person()
//	{
//		cout << "Person析构构造函数调用" << endl;
//	}
//
//	int m_Age;
//};
////void test01()
////{
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////	cout << "p2的年龄 " << p2.m_Age << endl;
////}
//void test02()
//{
//	Person p(28);
//	Person p2(p);
//	cout << "p2的年龄 " << p2.m_Age << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}