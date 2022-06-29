#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<deque>
using namespace std;
void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);

	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.pop_back();
	printDeque(d);

	d.pop_front();
	printDeque(d);
}
void test02()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	printDeque(d);

	d.insert(d.begin(), 1000);
	printDeque(d);

	d.insert(d.begin(), 2, 10000);
	printDeque(d);

	deque<int>d1;
	d1.push_back(1);
	d1.push_back(2);
	d1.push_back(3);

	d.insert(d.begin(), d1.begin(), d1.end());
	printDeque(d);

}
void test03()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	deque<int>::const_iterator it = d.begin();
	it++;
	d.erase(it);
	printDeque(d);

	//d.erase(d.begin(), d.end());
	d.clear();
	printDeque(d);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}












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
//	for (int i = 0; i < 10; i++)
//	{
//		d.push_back(i);
//	}
//	printDeque(d);
//
//	if (d.empty())
//	{
//		cout << "d为空" << endl;
//	}
//	else
//	{
//		cout << "d不为空" << endl;
//		cout << "d的大小为：" << d.size() << endl;
//	}
//	 
//	d.resize(15,100);
//	printDeque(d);
//
//	d.resize(5);
//	printDeque(d);
//}
//int main()
//{
//	test01();
//	//test02();
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
//	for (int i = 0; i < 10; i++)
//	{
//		d.push_back(i);
//	}
//	printDeque(d);
//
//	deque<int>d2;
//	d2 = d;
//	printDeque(d2);
//
//	deque<int>d3;
//	d3.assign(d.begin(), d.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10,100);
//	printDeque(d4);
//}
//int main()
//{
//	test01();
//	//test02();
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
//	for (int i = 0; i < 10; i++)
//	{
//		d.push_back(i);
//	}
//	printDeque(d);
//
//	deque<int>d2(d.begin(),d.end());
//	printDeque(d2);
//
//	deque<int>d3(10,100);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}











//void test01()
//{
//	vector<int>v;
//	int num = 0;
//	v.reserve(10000);
//	int*p = NULL;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}










//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i >0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "交换后" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(5);
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	vector<int>(v).swap(v);
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}











//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "第一个元素为：" << v1.front() << endl;
//	cout << "最后一个元素为：" << v1.back() << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}








//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	printVector(v1);
//
//	v1.pop_back();
//	printVector(v1);
//
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//v1.erase(v1.begin(),v1.end());
//	v1.clear();
//	printVector(v1);
//
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}










//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为：" << v1.capacity() << endl;
//		cout << "v1的大小为：" << v1.size() << endl;
//	}
//
//	v1.resize(15,100);
//	printVector(v1);
//
//	v1.resize(5);
//	printVector(v1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}










//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	vector<int>v4;
//	v4.assign(10,100);
//	printVector(v4);
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}









//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	vector<int>v3(10, 100);
//	printVector(v3);
//
//	vector<int>v4(v3);
//	printVector(v4);
//
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}