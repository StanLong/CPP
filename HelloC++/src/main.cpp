#include <iostream>
#include "D:\StanLong\git_repository\C\HelloC++\include\workManager.h"
#include "D:\StanLong\git_repository\C\HelloC++\src\workerManager.cpp"

int main(int argc, char *argv[])
{
	//ʵ���������߶���
    WorkerManager wm;
    //����չʾ�˵���Ա����
    wm.Show_Menu();
    
    int choice=0; // �����洢�û���ѡ��
    while(true)
    {
        // ���ò˵�չʾ�ĳ�Ա����
        cout << "����������ѡ��: " << endl;
        cin >> choice;
        switch (choice)
        {
            case 0: //�˳�ϵͳ
                wm.ExitSystem();
                break;
            case 1://����ְ��
                break;
            case 2://��ʾְ��
                break;
            case 3://ɾ��ְ��
                break;
            case 4://�޸�ְ��
                break;
            case 5://����ְ��
                break;
            case 6://����ְ��
                break;
            case 7://����ĵ�
                break;
            default://����
                break;
        }
    }

    return 0;
}