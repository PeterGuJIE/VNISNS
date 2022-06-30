#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<deque>
#include<algorithm>
#include<string>
#include<vector>
#include<time.h>
#include<stack>
#include<queue>
#include<list>
using namespace std;
void printList(list<int>&L)
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int>l1; 
	l1.push_back(10);
	l1.push_back(30);
	l1.push_back(40);
	l1.push_back(50);

	printList(l1);

	list<int>l2;
	l2 = l1;
	printList(l2);

	list<int>l3;
	l3.assign(l2.begin(), l2.end());
	printList(l3);

	list<int>l4;
	l4.assign(10,100);
	printList(l4);


}

void test02()
{
	list<int>l1;
	l1.push_back(10);
	l1.push_back(30);
	l1.push_back(40);
	l1.push_back(50);

	list<int>l2;
	l2.assign(10, 100);
	cout << "����ǰ��" << endl;
	printList(l1);
	printList(l2);

	cout << "������" << endl;
	l1.swap(l2);
	printList(l1);
	printList(l2);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}













//void printList(const list<int>&l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
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
//	list<int>l2(l1.begin(), l1.end());
//	printList(l2);
//	
//	list<int>l3(l2);
//	printList(l3);
//
//	list<int>l4(10,100);
//	printList(l4);
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
//public:
//	Person(string n, int a)
//	{
//		this->name = n;
//		this->age = a;
//	}
//	string name;
//	int age;
//};
//void test01()
//{
//	queue<Person>q;
//
//	Person p1("��ɮ", 30);
//	Person p2("�����", 1000);
//	Person p3("��˽�", 900);
//	Person p4("ɳɮ", 800);
//	cout << "���д�СΪ��" << q.size() << endl;
//
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	while (!q.empty())
//	{
//		cout << "��ͷԪ�� --������" << q.front().name << " ���䣺" << q.front().age << endl;
//
//		cout << "��βԪ�� --������" << q.back().name << " ���䣺" << q.back().age << endl;
//
//		q.pop();
//	}
//	cout << "���д�СΪ��" << q.size() << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}










//void test01()
//{
//	stack<int>s;
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//
//	while (!s.empty())
//	{
//		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
//		s.pop();
//	}
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
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
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//	string m_Name;
//	int m_Score;
//};
//void creatPerson(vector<Person>&v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//	}
//}
//void setScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//
//		/*cout << "ѡ�֣�" << it->m_Name << "��֣�" << it->m_Score << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			cout << *dit << " ";
//		}*/
//		//cout << endl;
//		sort(d.begin(), d.end());
//		d.pop_back();
//		d.pop_front();
//
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;
//		}
//		int avg = sum / d.size();
//
//		it->m_Score = avg;
//	}
//}
//void showScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "ѡ�֣�" << (*it).m_Name << " ƽ����" << (*it).m_Score << endl;
//	}
//}
//int main()
//{
//	vector<Person>v;
//	creatPerson(v);
//	srand((unsigned int)time(NULL));
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "������"<<(*it).m_Name << " ������" << (*it).m_Score << endl;
//	//}
//	
//	setScore(v);
//
//	showScore(v);
//
//	system("pause");
//	return 0;
//}










//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " "; 
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	printDeque(d);
//	cout << "�����" << endl;
//	sort(d.begin(), d.end());
//	printDeque(d);
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}







//void test01()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "��һ��Ԫ�أ�" << d.front() << endl;
//	cout << "���һ��Ԫ�أ�" << d.back() << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}