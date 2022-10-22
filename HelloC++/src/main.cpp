#include <iostream>
#include "D:\StanLong\git_repository\C\HelloC++\include\workManager.h"
#include "D:\StanLong\git_repository\C\HelloC++\src\workerManager.cpp"

int main(int argc, char *argv[])
{
	//实例化管理者对象
    WorkerManager wm;
    //调用展示菜单成员函数
    wm.Show_Menu();
    
    int choice=0; // 用来存储用户的选项
    while(true)
    {
        // 调用菜单展示的成员函数
        cout << "请输入您的选择: " << endl;
        cin >> choice;
        switch (choice)
        {
            case 0: //退出系统
                wm.ExitSystem();
                break;
            case 1://增加职工
                break;
            case 2://显示职工
                break;
            case 3://删除职工
                break;
            case 4://修改职工
                break;
            case 5://查找职工
                break;
            case 6://排序职工
                break;
            case 7://清空文档
                break;
            default://清屏
                break;
        }
    }

    return 0;
}