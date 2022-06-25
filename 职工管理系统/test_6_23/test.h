#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
#include"employee.h"
#include"boss.h"
#include"manager.h"
#include<fstream>
#define FILENAME "emp.txt"


class WorkerManager
{
public:
	WorkerManager();
	void ShowMenu();//展示菜单

	void ExitSystem();//退出程序

	int m_EmpNum;//记录职工人数
	Worker**m_EmpArray;//职工数组指针

	void AddEmp();//添加职工

	void save();//保存文件

	bool m_FileEmpty;//判断文件是否为空
	
	int get_EmpNum();//统计文件中人数

	void init_Emp();//初始化员工

	void Show_Emp();//显示职工

	void Del_Emp();//删除职工

	int IsExist(int id);//判断职工是否存在

	void Mod_Emp();//修改职工

	void Find_Emp();//查找职工

	void Sort_Emp();//排序

	void Clean_Flie();//清空文件
	~WorkerManager();
};