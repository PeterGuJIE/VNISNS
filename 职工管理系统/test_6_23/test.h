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
	void ShowMenu();//չʾ�˵�

	void ExitSystem();//�˳�����

	int m_EmpNum;//��¼ְ������
	Worker**m_EmpArray;//ְ������ָ��

	void AddEmp();//���ְ��

	void save();//�����ļ�

	bool m_FileEmpty;//�ж��ļ��Ƿ�Ϊ��
	
	int get_EmpNum();//ͳ���ļ�������

	void init_Emp();//��ʼ��Ա��

	void Show_Emp();//��ʾְ��

	void Del_Emp();//ɾ��ְ��

	int IsExist(int id);//�ж�ְ���Ƿ����

	void Mod_Emp();//�޸�ְ��

	void Find_Emp();//����ְ��

	void Sort_Emp();//����

	void Clean_Flie();//����ļ�
	~WorkerManager();
};