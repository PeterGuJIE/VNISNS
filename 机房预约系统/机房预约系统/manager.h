#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include"identity.h"
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"
class Manager :public Identity
{
public:
	Manager();

	Manager(string name, string pwd);

	virtual void operMenu();

	void addPerson();

	void showPerson();

	void showComputer();

	void cleanFile();

	void initVector();

	bool checkRepeat(int id,int type);

	vector<Student>vStu;

	vector<Teacher>vTea;

	vector<computerRoom>vCom;
};