#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Base1
{
public:
	Base1()
	{
		m_a = 100;
	}
	int m_a;
};

class Base2
{
public:
	Base2()
	{
		m_a = 200;
	}
	int m_a;
};

class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_c = 300;
		m_d = 400;
	}
	int m_c;
	int m_d;
};
void test01()
{
	Son s;
	cout << "sizeof = " << sizeof(s) << endl;
	cout << "Base1 m_a = " << s.Base1::m_a << endl;
	cout << "Base2 m_a = " << s.Base2::m_a << endl;

}
int main()
{
	test01();
	//test02();

	system("pause");
	return 0;
}











//class Base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "Base - static void func"<< endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//};
//int Base::m_a=100;
//class Son :public Base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "Son - static void func" << endl;
//	}
//};
//int Son::m_a = 200;
//
//void test01()
//{
//	cout << "ͨ������:" << endl;
//	Son s;
//	cout << "Son m_a = " << s.m_a << endl;
//	cout << "Base m_a = " << s.Base::m_a << endl;
//
//	cout << "ͨ������:" << endl;
//	cout << "Son m_a = " << Son::m_a << endl;
//	cout << "Base m_a = " << Son:: Base::m_a << endl;
//
//}
//void test02()
//{
//	cout << "ͨ������:" << endl;
//	Son sa;
//	sa.func();
//	sa.Base::func();
//
//	cout << "ͨ������:" << endl;
//	Son::func();
//	Son::Base::func();
//	Son::Base::func(100);
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}









//class Base
//{
//public:
//	Base()
//	{
//		m_a = 100;
//	}
//	void func()
//	{
//		cout << "Base - func" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a)" << endl;
//	}
//	int m_a;
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_a = 200;
//	}
//	void func()
//	{
//		cout << "Son - func" << endl;
//	}
//	int m_a;
//};
//void test01()
//{
//	Son s;
//	cout << "Son m_a = " << s.m_a << endl;
//	cout << "Base m_a = " << s.Base::m_a << endl;
//}
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	s.Base::func(100);
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//} 










//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base����" << endl;
//	}
//	~Base()
//	{
//		cout << "Base����" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son����" << endl;
//	}
//	~Son()
//	{
//		cout << "Son����" << endl;
//	}
//};
//void test01()
//{
//	//Base b;
//	Son s;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}












//class Base
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Son :public Base
//{
//public:
//	int m_d;
//};
//void test01()
//{
//	cout << "sizeof = " << sizeof(Son) << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}







//class Base1
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Son1 :public Base1{
//public:
//	void func()
//	{
//		m_a = 10;
//		m_b = 10;
//		m-c=10;
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_a = 100;
//}
//class Base2
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_a = 100;
//		m_b = 100;
//		m_c=100;
//	}
//};
//void test02()
//{
//	Son2 s2;
//	s2.m_a = 1000;
//}
//
//
//class Base3
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_a = 100;
//		m_b = 100;
//		m_c=100;
//	}
//};
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		m_a = 1000;
//	}
//};
//void test03()
//{
//	Son3 s3;
//	s3.m_a = 1000;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

















//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ..." << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ..." << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ..." << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//class BassPage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ..." << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++" << endl;
//	}
//};
//
//class Python :public BassPage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
//class Java :public BassPage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
//class Cpp :public BassPage
//{
//public:
//	void content()
//	{
//		cout << "Cppѧ����Ƶ" << endl;
//	}
//};
//void test01()
//{
//	cout << "Python������Ƶҳ��:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "------------------------------" << endl;
//	cout << "Java������Ƶҳ��:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "------------------------------" << endl;
//	cout << "C++������Ƶҳ��:" << endl;
//	Cpp cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//	cout << "------------------------------" << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}