#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
using namespace std;
#include<string>
#include<iostream>
#include"worker.h"
class Manager :public Worker
{
public:
	Manager(int id, string name, int did);

	virtual void showInfo();

	virtual string getDeptName();
};


