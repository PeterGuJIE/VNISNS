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
	cout << "交换前：" << endl;
	printList(l1);
	printList(l2);

	cout << "交换后：" << endl;
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
//	Person p1("唐僧", 30);
//	Person p2("孙悟空", 1000);
//	Person p3("猪八戒", 900);
//	Person p4("沙僧", 800);
//	cout << "队列大小为：" << q.size() << endl;
//
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	while (!q.empty())
//	{
//		cout << "队头元素 --姓名：" << q.front().name << " 年龄：" << q.front().age << endl;
//
//		cout << "队尾元素 --姓名：" << q.back().name << " 年龄：" << q.back().age << endl;
//
//		q.pop();
//	}
//	cout << "队列大小为：" << q.size() << endl;
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
//	cout << "栈的大小：" << s.size() << endl;
//
//	while (!s.empty())
//	{
//		cout << "栈顶元素为：" << s.top() << endl;
//		s.pop();
//	}
//	cout << "栈的大小：" << s.size() << endl;
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
//		string name = "选手";
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
//		/*cout << "选手：" << it->m_Name << "打分：" << it->m_Score << endl;
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
//		cout << "选手：" << (*it).m_Name << " 平均分" << (*it).m_Score << endl;
//	}
//}
//int main()
//{
//	vector<Person>v;
//	creatPerson(v);
//	srand((unsigned int)time(NULL));
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "姓名："<<(*it).m_Name << " 分数：" << (*it).m_Score << endl;
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
//	cout << "排序后" << endl;
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
//	cout << "第一个元素：" << d.front() << endl;
//	cout << "最后一个元素：" << d.back() << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}