#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
#include"worker.h"
//#include"employee.h"
//#include"boss.h"
//#include"manager.h"
int main()
{
	/*Worker*worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->showInfo();
	delete worker;
	worker = new Manager(2, "����", 2);
	worker->showInfo();
	delete worker;
	worker = new Boss(3, "����", 3);
	worker->showInfo();
	delete worker;*/

	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.ShowMenu();
		cout << "����������ѡ��: " << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			wm.ExitSystem();
			break;
		case 1:
			wm.AddEmp();
			break;
		case 2:
			wm.Show_Emp();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clean_Flie();
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}