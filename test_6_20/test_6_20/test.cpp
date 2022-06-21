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
//	cout << "通过对象:" << endl;
//	Son s;
//	cout << "Son m_a = " << s.m_a << endl;
//	cout << "Base m_a = " << s.Base::m_a << endl;
//
//	cout << "通过类名:" << endl;
//	cout << "Son m_a = " << Son::m_a << endl;
//	cout << "Base m_a = " << Son:: Base::m_a << endl;
//
//}
//void test02()
//{
//	cout << "通过对象:" << endl;
//	Son sa;
//	sa.func();
//	sa.Base::func();
//
//	cout << "通过类名:" << endl;
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
//		cout << "Base构造" << endl;
//	}
//	~Base()
//	{
//		cout << "Base析构" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造" << endl;
//	}
//	~Son()
//	{
//		cout << "Son析构" << endl;
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
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图..." << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图..." << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图..." << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//class BassPage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图..." << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++" << endl;
//	}
//};
//
//class Python :public BassPage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
//class Java :public BassPage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
//class Cpp :public BassPage
//{
//public:
//	void content()
//	{
//		cout << "Cpp学科视频" << endl;
//	}
//};
//void test01()
//{
//	cout << "Python下载视频页面:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "------------------------------" << endl;
//	cout << "Java下载视频页面:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "------------------------------" << endl;
//	cout << "C++下载视频页面:" << endl;
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