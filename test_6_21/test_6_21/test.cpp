#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
			return m_Num1 + m_Num2;
		else if (oper == "-")
			return m_Num1 - m_Num2;
		else if (oper == "*")
			return m_Num1 * m_Num2;
		else
			return m_Num1 / m_Num2;
	}
	int m_Num1;
	int m_Num2;
};
void test01()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;

}




class Abstract
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
class Add :public Abstract
{
public:
	virtual int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
class Sub :public Abstract
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
class Mul :public Abstract
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test02()
{
	Abstract*abc = new Add;
	abc->m_Num1 = 100;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new Sub;
	abc->m_Num1 = 100;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new Mul;
	abc->m_Num1 = 100;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
	abc = NULL;

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}









//class Animal
//{
//public:
//	virtual void speak()
//	//void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//
//	}
//};
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//
//	}
//};
//void doSpeak(Animal&animal)
//{
//	animal.speak();
//}
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//void test02()
//{
//	cout << "sizeof Animal =" << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}






//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//
//	}
//};
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//
//	}
//};
//void doSpeak(Animal&animal)
//{
//	animal.speak();
//}
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}










//class Animal
//{
//public:
//	int m_age;
//};
//class Sheep :virtual public Animal
//{
//
//};
//class Tuo :virtual public Animal
//{
//
//};
//class SheepTuo :public Sheep, public Tuo
//{
//
//};
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_age = 18;
//	st.Tuo::m_age = 28;
//	cout << "st.Sheep = " << st.Sheep::m_age << endl;
//	cout << "st.Tuo = " << st.Tuo::m_age << endl;
//	cout << "st.m_age = " << st.m_age << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}