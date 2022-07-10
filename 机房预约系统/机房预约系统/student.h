#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include"identity.h"
#include"computerRoom.h"
#include"orderFile.h"
class Student :public Identity
{
public:
	Student();

	Student(int id, string name, string pwd);

	virtual void operMenu();

	void applyOrder();

	void showMyOrder();

	void showAllOrder();

	void cancelOrder();

	int m_Id;

	vector<computerRoom>vCom;
};