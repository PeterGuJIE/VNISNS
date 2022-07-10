#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#pragma once
#include<map>
#include"globalFile.h"
#include<fstream>
#include<string>
class orderFile
{
public:
	orderFile();

	void updateOrder();

	int m_Size;

	map<int, map<string, string>>m_orderData;
};