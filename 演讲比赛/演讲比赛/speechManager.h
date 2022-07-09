#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<vector>
#include"speaker.h"
#include<map>
#include<deque>
#include<functional>
#include<numeric>
#include<algorithm>
#include<fstream>
#include<ctime>
using namespace std;

class SpeechManager
{
public:
	SpeechManager();

	void show_Menu();

	void exitSystem();

	~SpeechManager();

	void initSpeech();

	void createSpeaker();

	void startSpeech();

	void speechDraw();
	
	void speechContest();

	void showScore();

	void saveRecord();

	void loadRecord();

	bool fileIsEmpty;

	map<int, vector<string>>m_Record;

	void showRecord();

	void clearRecord();

	vector<int>v1;

	vector<int>v2;

	vector<int>vVictory;

	map<int, Speaker>m_Speaker;

	int m_Index;
};