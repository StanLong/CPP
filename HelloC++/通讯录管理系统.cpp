# include <iostream>
#define MAX 1000 // 定义宏常量MAX表示通讯录最大人数
using namespace std;


// 显示菜单
void showMenu()
{
    
    cout << "*************************" <<endl;
    cout << "***** 1、添加联系人 *****" <<endl;
    cout << "***** 2、显示联系人 *****" <<endl;
    cout << "***** 3、删除联系人 *****" <<endl;
    cout << "***** 4、查找联系人 *****" <<endl;
    cout << "***** 5、修改联系人 *****" <<endl;
    cout << "***** 6、清空联系人 *****" <<endl;
    cout << "***** 0、退出通讯录 *****" <<endl;
    cout << "*************************" <<endl;

}

// 联系人结构体
struct Person
{
    string m_name;
    int m_sex;
    int m_age;
    string m_phone;
    string m_addr;
};


// 通讯录结构体
struct AddressBooks
{
    Person personArray[MAX];
    int m_size;
};





int main()
{
    int select = 0;
    while(true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1 : // 添加联系人
            break;
        case 2 : // 显示联系人
            break;
        case 3 : // 删除联系人
            break;
        case 4 : // 查找联系人
            break;
        case 5 : // 修改联系人
            break;
        case 6 : // 清空联系人
            break;
        case 0 : // 退出通讯录
            cout << "欢迎下次登录" << endl;
            system("pause");
            return 0;
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}