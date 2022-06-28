#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << subStr << endl;
}
void test02()
{
	string email = "zhangsan@sina.com";
	int pos = email.find("@");
	cout << pos << endl;
	string usrName = email.substr(0, pos);
	cout << usrName << endl;

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}









//void test01()
//{
//	string str = "hello";
//	str.insert(1, "111");
//	cout << str << endl;
//
//	str.erase(1,2);
//	cout << str << endl;
//
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}









//void test01()
//{
//	string str = "hello world";
//	//cout << str << endl;
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	str[0] = 'x';
//	cout << str << endl;
//
//	str.at(1) = 'b';
//	cout << str << endl;
//
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
//	string str1 = "xello";
//	string str2 = "xxllo";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 == str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1 > str2" << endl;
//	}
//	else
//	{
//		cout << "str1 < str2" << endl;
//	}
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}






//void test01()
//{
//	string str1 = "abcdefgde";
//	int pos = str1.find("de");
//	if (pos == -1)
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了："<<pos << endl;
//	}
//
//
//	pos = str1.rfind("de");
//	cout << "找到了：" << pos << endl;
//
//}
//void test02()
//{
//	string str1 = "abcdefg";
//
//	str1.replace(1, 3, "1111");
//	cout << str1 << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}











//void test01()
//{
//	string str1 = "我";
//	str1 += "爱玩游戏:";
//	cout << str1 << endl;
//
//	string str2 = " LOL DNF";
//	str1 += str2;
//	cout << str1 << endl;
//
//	string str3 = "I";
//	str3.append(" love ");
//	cout << str3 << endl;
//
//	str3.append("game abcdee", 4);
//	cout << str3 << endl;
//
//	str3.append(str2);
//	cout << str3 << endl;
//
//	//str3.append(str2, 0, 4);
//	str3.append(str2, 4, 4);
//	cout << str3 << endl;
//
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}














//void test01()
//{
//	string str1;
//	str1 = "hello world";
//	cout << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << str3 << endl;
//
//	string str4;
//	str4.assign("hello C++");
//	cout << str4 << endl;
//
//	string str5;
//	str5.assign("hello C++",5);
//	cout << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << str6 << endl;
//
//	string str7;
//	str7.assign(10,'w');
//	cout << str7 << endl;
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}








//void test01()
//{
//	string s1;
//
//
//	const char*str = "hello world";
//	string s2(str);
//	cout << s2 << endl;
//
//	string s3(s2);
//	cout << s3 << endl;
//
//	string s4(10, 'a');
//	cout << s4 << endl;
//
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
//	vector<vector<int>>v;
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	test01();
//	test02();
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
//	string m_Name;
//	int m_Age;
//};
//void test01()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 24);
//	Person p3("vvv", 34);
//	Person p4("ccc", 56);
//	Person p5("ddd", 67);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;
//		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//
//	}
//}
//void test02()
//{
//	vector<Person*>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 24);
//	Person p3("vvv", 34);
//	Person p4("ccc", 56);
//	Person p5("ddd", 67);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl;
//	}
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}