#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#pragma once
using namespace std;
#include<string>

class Worker
{
public:

	virtual void showInfo() = 0;

	virtual string getDeptName() = 0;


	int m_Id;
	string m_Name;
	int m_DeptId;
};