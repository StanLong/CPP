#include <iostream>
#include "D:\StanLong\git_repository\C\HelloC++\include\workManager.h"
#include "D:\StanLong\git_repository\C\HelloC++\src\workerManager.cpp"
#include "D:\StanLong\git_repository\C\HelloC++\include\worker.h"
#include "D:\StanLong\git_repository\C\HelloC++\include\employee.h"
#include "D:\StanLong\git_repository\C\HelloC++\src\employee.cpp"
#include "D:\StanLong\git_repository\C\HelloC++\include\manager.h"
#include "D:\StanLong\git_repository\C\HelloC++\src\manager.cpp"
#include "D:\StanLong\git_repository\C\HelloC++\include\boss.h"
#include "D:\StanLong\git_repository\C\HelloC++\src\boss.cpp"


int main(int argc, char *argv[])
{

    Worker * worker = NULL;

    // ְ��
    worker = new Employee(1, "����", 1);
    worker->showInfo();
    delete worker;
    
    // ����
    worker = new Manager(2, "����", 2);
    worker->showInfo();
    delete worker;

    // �ϰ�
    worker = new Boss(2, "����", 2);
    worker->showInfo();
    delete worker;


	//ʵ���������߶���
    // WorkerManager wm;
    //����չʾ�˵���Ա����
    // wm.Show_Menu();
    
    // int choice=0; // �����洢�û���ѡ��
    // while(true)
    // {
    //     // ���ò˵�չʾ�ĳ�Ա����
    //     cout << "����������ѡ��: " << endl;
    //     cin >> choice;
    //     switch (choice)
    //     {
    //         case 0: //�˳�ϵͳ
    //             wm.ExitSystem();
    //             break;
    //         case 1://����ְ��
    //             break;
    //         case 2://��ʾְ��
    //             break;
    //         case 3://ɾ��ְ��
    //             break;
    //         case 4://�޸�ְ��
    //             break;
    //         case 5://����ְ��
    //             break;
    //         case 6://����ְ��
    //             break;
    //         case 7://����ĵ�
    //             break;
    //         default://����
    //             break;
    //     }
    // }

    return 0;
}