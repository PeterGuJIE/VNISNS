#define _CRT_SECURE_NO_WARNINGS 1
#include"identity.h"
#include"manager.h"
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"

void studentMenu(Identity*&student)
{
	while (true)
	{
		student->operMenu();
		Student*stu = (Student*)student;

		int select = 0;
		cin >> select;
		if (select == 1)
		{
			stu->applyOrder();
		}
		else if (select == 2)
		{
			stu->showMyOrder();
		}
		else if (select == 3)
		{
			stu->showAllOrder();
		}
		else if (select == 4)
		{
			stu->cancelOrder();
		}
		else
		{
			delete student;
			cout << "�˳��ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}



void teacherMenu(Identity*&teacher)
{
	while (true)
	{
		teacher->operMenu();

		Teacher*tea = (Teacher*)teacher;

		int select = 0;

		cin >> select;
		if (select == 1)
		{
			tea->showAllOrder();
		}
		else if (select == 2)
		{
			tea->validOrder();
		}
		else
		{
			delete teacher;
			cout << "�˳��ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}

	}
}





void managerMenu(Identity*&manager)
{
	while (true)
	{
		manager->operMenu();

		Manager*man = (Manager*)manager;
		int select = 0;

		cin >> select;

		if (select == 1)
		{
			//cout << "����˺�" << endl;
			man->addPerson();
		}
		else if (select == 2)
		{
			//cout << "�鿴�˺�" << endl;
			man->showPerson();
		}
		else if (select == 3)
		{
			//cout << "�鿴����" << endl;
			man->showComputer();
		}
		else if (select == 4)
		{
			//cout << "���ԤԼ" << endl;
			man->cleanFile();
		}
		else
		{
			delete manager;
			cout << "�˳��ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}



void LoginIn(string fileName, int type)
{
	Identity *person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	int id;
	string name;
	string pwd;

	if (type == 1)
	{
		cout << "���������ѧ�ţ�" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "����������ְ���ţ�" << endl;
		cin >> id;
	}
	cout << "�������û�����" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> pwd;

	if (type == 1)
	{
		int fId;
		string fNmae;
		string fPwd;

		while (ifs >> fId && ifs >> fNmae && ifs >> fPwd)
		{
			if (fId == id && fNmae == name && fPwd == pwd)
			{
				cout << "ѧ����֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);

				studentMenu(person);
				return;
			}
		}
	}
	else if (type == 2)
	{
		int fId;
		string fNmae;
		string fPwd;

		while (ifs >> fId && ifs >> fNmae && ifs >> fPwd)
		{
			if (fId == id && fNmae == name && fPwd == pwd)
			{
				cout << "��ʦ��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);

				teacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		string fNmae;
		string fPwd;

		while (ifs >> fNmae && ifs >> fPwd)
		{
			if (fNmae == name && fPwd == pwd)
			{
				cout << "����Ա��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);

				managerMenu(person);
				return;
			}
		}
	}
	cout << "��֤��¼ʧ�ܣ�" << endl;
	system("pause");
	system("cls");

}
int main()
{
	char select = 0;
	while (true)
	{
		cout << "===========================  ��ӭ�������ǲ��ͻ���ԤԼϵͳ  ===========================" << endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t ------------------------------------- \n";
		cout << "\t\t|                                     |\n";
		cout << "\t\t|             1.ѧ������              |\n";
		cout << "\t\t|                                     |\n";
		cout << "\t\t|             2.��    ʦ              |\n";
		cout << "\t\t|                                     |\n";
		cout << "\t\t|             3.�� �� Ա              |\n";
		cout << "\t\t|                                     |\n";
		cout << "\t\t|             0.��    ��              |\n";
		cout << "\t\t|                                     |\n";
		cout << "\t\t ------------------------------------- \n";
		cout << "��������ѡ��";
		cin >> select;
		switch (select)
		{
		case '1':
			LoginIn(STUDENT_FILE, 1);
			break;
		case '2':
			LoginIn(TEACHER_FILE, 2);
			break;
		case '3':
			LoginIn(ADMIN_FILE, 3);
			break;
		case '0':
			cout << "��ӭ��һ��ʹ��" << endl;
			system("pause");
			exit(0);
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}