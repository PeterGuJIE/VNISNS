#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<fstream> 
using namespace std;

class Person
{
public:
	char m_name[64];
	int m_age;
};

void test01()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������ " << p.m_name << " ���䣺 " << p.m_age << endl;
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}





//class Person
//{
//public:
//	char m_Name[64];
//	int m_age;
//};
//void test01()
//{
//	//ofstream ofs("person.txt", ios::out | ios::binary);
//	ofstream ofs;
//	ofs.open("person.txt", ios::out | ios::binary);
//	Person p = { "����",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}





//void test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	string buf;
//	while (getline(ifs,buf))
//	{
//		cout << buf << endl;
//	}
//
//	/*char c;
//	while ((c = ifs.get())!=EOF)
//	{
//		cout << c;
//	}*/
//	ifs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}











//void test01()
//
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//	ofs << "����:����" << endl;
//	ofs << "�Ա�:��" << endl;
//	ofs << "����:18" << endl;
//	ofs.close();
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}












//class CPU
//{
//public:
//	virtual void calculate() = 0;
//};
//class VideoCard
//{
//public:
//	virtual void display() = 0;
//};
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//class Computer
//{
//public:
//	Computer(CPU*cpu, VideoCard*vc, Memory*mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	void work()
//	{
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//	~Computer()
//	{
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//private:
//	CPU*m_cpu;
//	VideoCard*m_vc;
//	Memory*m_mem;
//};
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel��CPU��ʼ������!" << endl;
//	}
//};
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel���Կ���ʼ��ʾ��!" << endl;
//	}
//};
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel���ڴ�����ʼ�洢��!" << endl;
//	}
//};
//
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Lenovo��CPU��ʼ������!" << endl;
//	}
//};
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo���Կ���ʼ��ʾ��!" << endl;
//	}
//};
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo���ڴ�����ʼ�洢��!" << endl;
//	}
//};
//
//void test01()
//{
//	CPU*intelCPU = new IntelCPU;
//	VideoCard*intelVideoCard = new IntelVideoCard;
//	Memory*intelMemory = new IntelMemory;
//	cout << "��һ̨���Թ���:" << endl;
//	Computer*computer1 = new Computer(intelCPU, intelVideoCard, intelMemory);
//	computer1->work();
//	delete computer1;
//
//	cout << "�ڶ�̨���Թ���:" << endl;
//	Computer*computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->work();
//	delete computer2;
//
//	cout << "����̨���Թ���:" << endl;
//	Computer*computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
//	computer3->work();
//	delete computer3;
//
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
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//	virtual void speak() = 0;
//	/*virtual~Animal()
//	{
//		cout << "Animal������������" << endl;
//	}*/
//	virtual~Animal() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal����������������" << endl;
//}
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯������" << endl;
//		m_name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_name << "Сè��˵��" << endl;
//	}
//	~Cat()
//	{
//		if (m_name != NULL)
//		{
//			cout << "Cat������������" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//	string*m_name;
//};
//void test01()
//{
//	Animal*animal = new Cat("Tom");
//	animal->speak();
//	delete animal;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}











//class Abstract
//{
//public:
//	virtual void Boil() = 0;
//
//	virtual void Brew() = 0;
//
//	virtual void PourINnCup() = 0;
//
//	virtual void PutSomething() = 0;
//
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourINnCup();
//		PutSomething();
//	}
//};
//class Coffee :public Abstract
//{
//public:
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪˮ" << endl;
//	}
//
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	virtual void PourINnCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	virtual void PutSomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
//class Tea :public Abstract
//{
//public:
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	virtual void PourINnCup()
//	{
//		cout << "���벣������" << endl;
//	}
//
//	virtual void PutSomething()
//	{
//		cout << "��������" << endl;
//	}
//};
//void doWork(Abstract*abs)
//{
//	abs->makeDrink();
//	delete abs;
//}
//void test01()
//{
//	doWork(new Coffee);
//	cout << "------------" << endl;
//	doWork(new Tea);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}








//class Base
//{
//public:
//	virtual void func() = 0;
//};
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func��������" << endl;
//	};
//};
//void test01()
//{
//	//Base b;
//	Son s;
//	Base*base = new Son;
//	base->func();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}