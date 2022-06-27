#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<string>
using namespace std;
template <class T>
class MyArr
{
public:
	MyArr(int capa)
	{
		//cout << "有参构造" << endl;
		this->m_Capa = capa;
		this->m_Size = 0;
		this->pArr = new T[this->m_Capa];
	}
	MyArr(const MyArr&arr)
	{
		//cout << "拷贝构造" << endl;

		this->m_Capa = arr.m_Capa;
		this->m_Size = arr.m_Size;
		//this->pArr = arr.pArr;
		this->pArr = new T[arr.m_Capa];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pArr[i] = arr.pArr[i];
		}
	}
	MyArr&operator=(const MyArr&arr)
	{
		//cout << "operator =构造" << endl;

		if (this->pArr != NULL)
		{
			delete[]this->pArr;
			this->pArr = NULL;
			this->m_Capa = 0;
			this->m_Size = 0;
		}
		this->m_Capa = arr.m_Capa;
		this->m_Size = arr.m_Size;
		this->pArr = new T[arr.m_Capa];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pArr[i] = arr.pArr[i];
		}
		return *this;
	}
	void PushBack(const T&val)
	{
		if (this->m_Capa == this->m_Size)
		{
			return;
		}
		this->pArr[this->m_Size] = val;
		this->m_Size++;
	}

	void Popback()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}
	T& operator[](int index)
	{
		return this->pArr[index];
	}
	int getCapa()
	{
		return this->m_Capa;
	}
	int gerSize()
	{
		return this->m_Size;
	}
	~MyArr()
	{
		if (this->pArr != NULL)
		{
			//cout << "析构函数" << endl;

			delete[]this->pArr;
			this->pArr = NULL;
		}
	}
private:
	T*pArr;
	int m_Capa;
	int m_Size;
};