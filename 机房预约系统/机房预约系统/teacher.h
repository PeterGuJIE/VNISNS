#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include"identity.h"
#include"orderFile.h"
class Teacher :public Identity
{
public:
	Teacher();

	Teacher(int id, string name, string pwd);

	virtual void operMenu();

	void showAllOrder();

	void validOrder();

	int m_EmpId;
};